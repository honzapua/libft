/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:10:34 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/04 18:50:30 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		++i;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i])
		++i;
	return (i);
}
*/

/*
function is a utility function to free the memory allocated for a
 dynamically allocated array of strings. It iterates through the array
 of strings and frees each string and then frees the array itself.
*/
static void	free_str_array(char **str_array)
{
	size_t	i;

	i = 0;
	while (str_array[i] != NULL)
		free(str_array[i++]);
	free(str_array);
	return ;
}

// Returns 0 when terminating null is encountered, otherwise returns true.
/*
function is used to move the pointer s to the beginning of the next word
in the string, where a word is defined by the character c being the delimiter.
It returns 0 when the terminating null character is encountered, otherwise,
 it returns true.
*/
static int	to_next_word(const char **s, char c)
{
	while (**s && **s == c)
		++(*s);
	return (**s);
}

/*
function counts the number of words in the input string s based on
 the delimiter c. It skips leading delimiters, increments the count for
 each word encountered, and continues until the end of the string.
*/
static int	count_words(const char *s, char c)
{
	int	count;

	if (s == NULL)
		return (-1);
	if (c == '\0')
		return (1);
	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++count;
		while (*s != c && *s)
			++s;
	}
	return (count);
}

/*
function calculates the length of a substring in the input string 
s until it encounters the delimiter c or the end of the string.
*/
static size_t	strlen_to_delimiter(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		++len;
	return (len);
}

/*
Function name:
ft_split

Prototype:
char **ft_split(char const *s, char c);

Parameters:
s: The string to be split.
c: The delimiter character.

Return value:
The array of new strings resulting from the split.
NULL if the allocation fails.

External functs.:
malloc, free

Description:
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/
char	**ft_split(const char *s, char c)
{
	char		**result;
	size_t		size;
	size_t		i;

	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL || s == NULL)
		return (result);
	i = 0;
	while (*s)
	{
		if (!to_next_word(&s, c))
			break ;
		size = (strlen_to_delimiter(s, c) + 1);
		result[i] = malloc(size * sizeof(char));
		if (result[i] == NULL)
		{
			free_str_array(result);
			return (NULL);
		}
		ft_strlcpy(result[i++], s, size);
		s += size - 1;
	}
	result[i] = NULL;
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Include the ft_split function definition here

void print_str_array(char **arr) {
    while (*arr != NULL) {
        printf("%s\n", *arr);
        arr++;
    }
}

int main() {
    // Test case 1
    const char *str1 = "This is a test string";
    char **result1 = ft_split(str1, ' ');
    printf("Test Case 1:\n");
    print_str_array(result1);
    free_str_array(result1);
    printf("\n");

    // Test case 2
    const char *str2 = "Split,comma,separated,string";
    char **result2 = ft_split(str2, ',');
    printf("Test Case 2:\n");
    print_str_array(result2);
    free_str_array(result2);
    printf("\n");

    // Test case 3
    const char *str3 = "OneWord";
    char **result3 = ft_split(str3, ' ');
    printf("Test Case 3:\n");
    print_str_array(result3);
    free_str_array(result3);
    printf("\n");

    // Test case 4
    const char *str4 = "  leading  and  trailing  spaces  ";
    char **result4 = ft_split(str4, ' ');
    printf("Test Case 4:\n");
    print_str_array(result4);
    free_str_array(result4);
    printf("\n");

    // Test case 5
    const char *str5 = "";
    char **result5 = ft_split(str5, ' ');
    printf("Test Case 5:\n");
    print_str_array(result5);
    free_str_array(result5);
    printf("\n");

    return (0);
}
*/
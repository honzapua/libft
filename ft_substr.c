/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:07:05 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/03 16:31:25 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// for the malloc()
#include "libft.h"

#include <string.h>

// size_t	ft_strlen(const char *str)
// {
// 	const char	*ptr_chr = str;

// 	while (*ptr_chr != '\0')
// 		ptr_chr++;
// 	return (ptr_chr - str);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	i;

// 	i = 0;
// 	while (src[i] && i + 1 < size)
// 	{
// 		dst[i] = src[i];
// 		++i;
// 	}
// 	if (size > 0)
// 		dst[i] = '\0';
// 	while (src[i])
// 		++i;
// 	return (i);
// }

/*
char	*ft_substr(char const *s, unsigned int start, size_t len);

Parameters
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.

Return value
The substring.
NULL if the allocation fails.

External functions
malloc

Description
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	if (s == NULL) {
	return NULL;  // Return NULL if the input string is NULL
	}

	size_t s_len = strlen(s);

	// Check if start index is out of bounds
	if (start >= s_len) {
	return NULL;
	}

	// Calculate the actual length of the substring
	size_t sub_len = (len < s_len - start) ? len : (s_len - start);

	// Allocate memory for the substring, including space for the 
	//null terminator
	char *substring = (char *)malloc((sub_len + 1) * sizeof(char));

	if (substring == NULL) {
	return NULL;  // Return NULL if memory allocation fails
	}

	// Copy the substring from the input string into the newly
	// allocated memory
	strncpy(substring, s + start, sub_len);

	// Null-terminate the substring
	substring[sub_len] = '\0';

	return substring;
}
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s) + 1;
	if (start > size)
	{
		res = malloc(1 * sizeof(char));
		if (res == NULL)
			return (NULL);
		*res = '\0';
		return (res);
	}
	else
		size -= start;
	if (size > len + 1)
		size = len + 1;
	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s + start, size);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *originalString = "Hello, World!";
	unsigned int startIndex = 7;
	size_t substringLength = 5;

	// Test the substr function
	char *result = ft_substr(originalString, startIndex, substringLength);

	if (result != NULL) {
	printf("Original String: %s\n", originalString);
	printf("Substring (starting from index %u, length %zu): %s\n",
	 startIndex, substringLength, result);

	// Remember to free the allocated memory
	free(result);
	} else {
	printf("Error: Memory allocation failed.\n");
	}
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:38:01 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/05 19:45:24 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	const char	*ptr_chr = str;

// 	while (*ptr_chr != '\0')
// 		ptr_chr++;
// 	return (ptr_chr - str);
// }

/*
Function name:
ft_strmapi

Prototype:
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

Turn in files:
-
Parameters:
s: The string on which to iterate.
f: The function to apply to each character.

Return value:
The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.

External functs.:
malloc

Description:
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.

//We add 1 to len to accommodate the null-terminator '\0' at the end.

// iterate through each character of the input string 's',
// apply the function 'f'
// to each character, and store the result in the new string.

*/
	// *result = NULL;

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	unsigned int	i;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	result = (char *) malloc((s_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		result[i] = f(i, s[i]);
		++i;
	}
	result[s_len] = '\0';
	return (result);
}

/*
#include <stdio.h>
// Example function: increments the ASCII value of each character by 1
char	increment_char(unsigned int index, char c)
{
	return (c + 1);
	index++;
}

int	main(void)
{
	const char *input = "hello";
	char *result = ft_strmapi(input, &increment_char);
	// char *result = ft_strmapi(input, &increment_char);
	if (result != NULL)
	{
		printf("Result: %s\n", result);
		free(result); // Don't forget to free the allocated memory
	} else {
	printf("Memory allocation failed.\n");
	}
	return (0);
}
*/
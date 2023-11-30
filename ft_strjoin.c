/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:43:01 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/30 18:05:21 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*ptr_chr = str;

	while (*ptr_chr != '\0')
		ptr_chr++;
	return (ptr_chr - str);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;

	if ((dst == NULL && src == NULL) || size == 0)
		return (0);
	length = 0;
	while (*dst && size > length)
	{
		++dst;
		++length;
	}
	while (*src && size > length + 1)
	{
		*dst = *src;
		++src;
		++dst;
		++length;
	}
	if (size > length)
		*dst = '\0';
	while (*src)
	{
		++length;
		++src;
	}
	return (length);
}

/*
Prototype: 
char	*ft_strjoin(char const *}s1, char const *s2);

Parameters:
s1: The prefix string.
s2: The suffix string

Return Value:
The new string.
NULL if the allocation fails.

External functions:
malloc

Description:
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.


//this without '\0' so must add 1
strlen = ft_strlen(s1) + ft_strlen(s2) + 1;
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstr;
	size_t	strlen;

	if (!s1 || !s2)
		return (NULL);

	strlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	joinstr = (char *)malloc (strlen * sizeof(char));

	if (joinstr == NULL)
		return (NULL);

	ft_strlcat(joinstr, s1, strlen);
	ft_strlcat(joinstr, s2, strlen);

	return (joinstr);
}
/*
#include <stdio.h>

int	main()
{
	const char *prefix = "Hello, ";
	const char *suffix = "World!";

	// Test the strjoin function
	char *joinedString = ft_strjoin(prefix, suffix);

	if (joinedString != NULL) {
	printf("Prefix String: %s\n", prefix);
	printf("Suffix String: %s\n", suffix);
	printf("Joined String: %s\n", joinedString);

	// Remember to free the allocated memory
	free(joinedString);
	} else {
	printf("Error: Memory allocation failed.\n");
	}

	return (0);
}
*/
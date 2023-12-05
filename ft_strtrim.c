/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:51:12 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/05 19:07:32 by jsmidrka         ###   ########.fr       */
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

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s)
// 	{
// 		if (*s == (char)c)
// 			return ((char *)s);
// 		++s;
// 	}
// 	if (c == '\0')
// 		return ((char *)s);
// 	return (NULL);
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

// static size_t	get_size(const char *s1, const char *set)
// {
// 	size_t	begin;
// 	size_t	end;
// 	size_t	all;

// 	all = ft_strlen(s1);
// 	begin = 0;
// 	end = 0;
// 	while (ft_strchr(set, *s1) && *s1)
// 	{
// 		++s1;
// 		++begin;
// 	}
// 	if (*s1 == '\0')
// 		return (1);
// 	while (*s1)
// 		++s1;
// 	--s1;
// 	while (ft_strchr(set, *s1))
// 	{
// 		--s1;
// 		++end;
// 	}
// 	return (all - begin - end + 1);
// }

/*
Function name:
ft_strtrim

Prototype:
char *ft_strtrim(char const *s1, char const *set);

Parameters:
s1: The string to be trimmed.
set: The reference set of characters to trim.

Return value:
The trimmed string.
NULL if the allocation fails.

External functs.:
malloc

Description:
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	size;
	char	*trimmed;

	if (!s1)
		return (NULL);
	size = get_size(s1, set);
	trimmed = malloc(size * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		++s1;
	ft_strlcpy(trimmed, s1, size);
	return (trimmed);
}

/*
#include <stdio.h>
#include <stdlib.h>

// Place the definitions of ft_strlen, ft_strrchr, ft_strlcpy,
// and ft_strtrim here

int	main(void)
{
	// Test ft_strlen
	const char *str = "Hello, World!";
	size_t str_len = ft_strlen(str);
	printf("Length of \"%s\": %zu\n", str, str_len);

	// Test ft_strrchr
	const char *search_char = "l";
	char *last_occurrence = ft_strchr(str, *search_char);
	printf("Last occurrence of '%s' in \"%s\": %s\n", search_char,
	 str, last_occurrence);

	// Test ft_strlcpy
	char dest[20];
	size_t copied_len = ft_strlcpy(dest, str, sizeof(dest));
	printf("Copied \"%s\" to dest with length %zu: %s\n", str, copied_len,
	 dest);

	// Test ft_strtrim
	const char *original_str = "xxxHello, World!xx";
	const char *set_to_trim = "x";
	char *trimmed_str = ft_strtrim(original_str, set_to_trim);
	printf("Original String: \"%s\"\n", original_str);
	printf("Trimmed String: \"%s\"\n", trimmed_str);

	// Remember to free the allocated memory
	free(trimmed_str);

	return (0);
}
*/

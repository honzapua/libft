/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:28:56 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/03 17:19:49 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
NAME
       strchr, strrchr, strchrnul - locate character in string

SYNOPSIS
       #include <string.h>

       char *strchr(const char *s, int c);

       char *strrchr(const char *s, int c);

       #define _GNU_SOURCE         / See feature_test_macros(7)/
       #include <string.h>

       char *strchrnul(const char *s, int c);

DESCRIPTION
       The  strchr()  function  returns  a  pointer to the first occurrence 
       of the character c in the string s.

       The strrchr() function returns a pointer to the last occurrence of
       the  character  c  in  the string s.

       The  strchrnul() function is like strchr() except that if c is not
       found in s, then it returns a pointer to the null byte at the end
	of s, rather than NULL.

       Here "character" means "byte"; these functions do not work with wide
       or multibyte characters.#include <stddef.h>

RETURN VALUE
       The strchr() and strrchr() functions return a pointer to the matched
       character or NULL if  the character  is  not found.  The terminating 
       null byte is considered part of the string, so that
       if c is specified as '\0', these functions return a pointer to the 
       terminator.

       The strchrnul() function returns a pointer to the matched character,
       or a pointer to the  null byte at the end of s (i.e., s+strlen(s))
       if the character is not found.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s)
	{
		if (*s == (char)c)
			result = (char *)s;
		++s;
	}
	if (c == '\0')
		return ((char *)s);
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// int len;
	const char	str[] = "https://www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	ret = ft_strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
}
*/
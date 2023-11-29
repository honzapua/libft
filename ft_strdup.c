/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:01:38 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/29 19:22:07 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// for the malloc()
#include "libft.h"

/*
NAME
strdup, strndup, strdupa, strndupa - duplicate a string

SYNOPSIS
#include <string.h>

char *strdup(const char *s);

char *strndup(const char *s, size_t n);
char *strdupa(const char *s);
char *strndupa(const char *s, size_t n);

Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

strdup():
	_XOPEN_SOURCE >= 500
	|| _POSIX_C_SOURCE >= 200809L // Since glibc 2.12: 
	|| _BSD_SOURCE || _SVID_SOURCE // Glibc versions <= 2.19:
strndup():
	Since glibc 2.10:
	_POSIX_C_SOURCE >= 200809L
	Before glibc 2.10:
	_GNU_SOURCE
strdupa(), strndupa(): _GNU_SOURCE

DESCRIPTION
The  strdup() function returns a pointer to a new string which is a duplicate
 of the string s.Memory for the new string is obtained with malloc(3), and 
 can be freed with free(3).

The strndup() function is similar, but copies at most n bytes.  If s is longer
 than n, only  n bytes are copied, and a terminating null byte ('\0') is added.

strdupa()  and  strndupa()  are  similar,  but use alloca(3) to allocate the
 buffer.  They are available only when using the GNU GCC suite, and suffer
 from the same limitations described in alloca(3).

RETURN VALUE
On success, the strdup() function returns a pointer to the duplicated string.
It returns NULL if insufficient memory was available, with errno set to
 indicate the cause of the error.

ERRORS
ENOMEM Insufficient memory available to allocate duplicate string.

https://www.geeksforgeeks.org/different-ways-to-copy-a-string-in-c-c/
?ref=header_search
8. Using strdup()
We can use the inbuilt function strdup() from the string.h header file to
 duplicate a string by allocating memory for a copy of the string using
 malloc, and then copying the string into the newly allocated memory.
 The function returns a pointer to the newly allocated copy of the string.

Syntax
char *strdup(const char *s);

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	length;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	d = malloc((length + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);// if malloc fails
	ft_strlcpy(d, s, length + 1);
	return (d);
}
*/
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

size_t	ft_strlen(const char *str)
{
	const char	*ptr_chr = str;

	while (*ptr_chr != '\0')
		ptr_chr++;
	return (ptr_chr - str);
}

// if (dest == NULL) then malloc fails
char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	strlen;

	strlen = ft_strlen(s);
	dest = malloc((strlen + 1) * sizeof(char));
	if (dest)
		ft_strlcpy(dest, s, (strlen + 1));
	return (dest);
}
/*
// C program to copy the string
// using strdup function
#include <stdio.h>
#include <string.h>
// original Function to copy the string
char	*copyString(char s[])
{
	char* s2;
	s2 = strdup(s);
	return (char*)s2;
}
// original Function to copy the string
char	*copyString2(char s[])
{
	char* s2;
	s2 = ft_strdup(s);
	return (char*)s2;
}
// Driver Code
int	main(void)
{
	char s1[20] = "GeeksforGeeks\n";
	char* s2;

	// Function Call
	s2 = copyString(s1);
	printf("%s", s2);

	char s1a[20] = "GeeksforGeeks\n";
	char*s2a;

	// Function Call
	s2a = copyString2(s1a);
	printf("%s", s2a);

	return (0);
}
*/
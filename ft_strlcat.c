/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:24:40 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/08 20:08:37 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <sys/types.h>
#include "libft.h"

/*
NAME
     strlcpy, strlcat — size-bounded string copying and concatenation

LIBRARY
     Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIShe check exists to pre‐
     vent potential security problems in incorrect code.de usage.)

     size_t
     strlcpy(char *dst, const char *src, size_t size);

     size_t
     strlcat(char *dst, const char *src, size_t size);

DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings re‐
     spectively.  They are designed to be safer, more consistent, and less er‐
     ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
     tions, strlcpy() and strlcat() take the full size of the buffer (not just
     the length) and guarantee to NUL-terminate the result (as long as size is
     larger than 0 or, in the case of strlcat(), as long as there is at least
     one byte free in dst).  Note that a byte for the NUL should be included
     in size.  Also note that strlcpy() and strlcat() only operate on true “C”
     strings.  This means that for strlcpy() src must be NUL-terminated and
     for strlcat() both src and dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
     minated string src to dst, NUL-terminating the result.

     The strlcat() function appends the NUL-terminated string src to the end
     of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
     nating the result.

RETURN VALUES
     The strlcpy() and strlcat() functions return the total length of the
     string they tried to create.  For strlcpy() that means the length of src.
     For strlcat() that means the initial length of dst plus the length of
     src.  While this may seem somewhat confusing, it was done to make trunca‐
     tion detection simple.

     Note, however, that if strlcat() traverses size characters without find‐
     ing a NUL, the length of the string is considered to be size and the des‐
     tination string will not be NUL-terminated (since there was no space for
     the NUL).  This keeps strlcat() from running off the end of a string.  In
     practice this should not happen (as it means that either size is incor‐
     rect or that dst is not a 
     prsize_t	strlcat(char *dst, const char *src, size_t size)
     The check exists to prevent potential security problems in incorrect code.

EXAMPLES
     The following code fragment illustrates the simple case:

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
size_t length;

// Check for invalid input: both src and dst are NULL, or size is 0.
if ((dst == NULL && src == NULL) || size == 0)
	return (0);

// Find the length of the destination string (dst) or until size is reached.
length = 0;
while (*dst && size > length)
{
	++dst;
	++length;
}

//Append characters from src to dst until size - 1 or a null character in src.
while (*src && size > length + 1)
{
	*dst = *src;
	++src;
	++dst;
	++length;
}

// Null-terminate the result if there is space in the destination buffer.
if (size > length)
	*dst = '\0';

// Continue reading characters in src to find its total length.
while (*src)
{
	++length;
	++src;
}

// Return the total length of the concatenated string.
return (length);
}
*/
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
		++dst;
		++length;
		++src;
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
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	first[] = "This is ";
	char	last[] = "a potentially long string";
	int	r;
	int	size = 16;
	char buffer[size];

	ft_strcpy(buffer, first);
	r = ft_strlcat(buffer, last, size);

	puts(buffer);
	printf("Value returned: %d\n",r);
	if (r > size)
		puts("String truncated");
	else
		puts("String was fully copied");

	return (0);
}
*/
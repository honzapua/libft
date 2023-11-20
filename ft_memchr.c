/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:20:00 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/20 23:24:39 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

/*
NAME
       memchr, memrchr, rawmemchr - scan memory for a character

SYNOPSIS
       #include <string.h>

       void *memchr(const void *s, int c, size_t n);

       void *memrchr(const void *s, int c, size_t n);

       void *rawmemchr(const void *s, int c);

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       memrchr(), rawmemchr(): _GNU_SOURCE

DESCRIPTION
The  memchr()  function  scans  the initial n bytes of the memory area pointed
to by s for the first instance of c.  Both c and the bytes of the memory area
pointed to by s are  interpreted as unsigned char.

The  memrchr()  function  is like the memchr() function, except that it
searches backward from the end of the n bytes pointed to by s instead of
forward from the beginning.

The rawmemchr() function is similar to memchr(): it assumes (i.e., the 
programmer knows  for certain)  that  an  instance  of  c lies somewhere in
 the memory area starting at the location pointed to by s, and so performs 
 an optimized search for c (i.e., no use of a  count  argument to  limit  the
range of the search).  If an instance of c is not found, the results are unpre‐
dictable.  The following call is a fast means of locating a string's 
terminating null byte:

	char *p = rawmemchr(s, '\0');

RETURN VALUE
The memchr() and memrchr() functions return a pointer to the matching  byte  
or  NULL  if  the character does not occur in the given memory area.

The  rawmemchr()  function  returns  a  pointer  to the matching byte, if one
 is found.  If no matching byte is found, the result is unspecified.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		++i;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "https://www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	ret = ft_memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:55:29 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/28 17:19:15 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
memcpy - copy memory area
printf("Before memcpy dest = %s\n", dest);
memcpy(dest, src, strlen(src)+1);
printf("After memcpy dest = %s\n", dest);


SYNOPSIS
#include <string.h>

void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.  Use memmove(3) if the memory areas do 
overlap.

RETURN VALUE
The memcpy() function returns a pointer to dest.
	
ATTRIBUTES
For an explanation of the terms used in this section, see attributes(7).

https://www.geeksforgeeks.org/different-ways-to-copy-a-string-in-c-c/
?ref=header_search
2. Using memcpy()
The memcpy() function is also used to copy from source to destination no matter
 what the source data contains and is defined in <string.h> header and memcpy()
 require a size parameter to be passed.

The main difference is that memcpy() always copies the exact number of 
specified bytes. strcpy() and other str methods, on the other hand, will copy 
until it reads a NULL (‘\0’) byte, and then stop after that. strcpy() is not 
intended to be used with zero-terminated C-strings.

memcpy() is hardware optimized and copies faster and works with any type of 
source data (like binary or encrypted bytes). strcpy() should never be used
 unless for any specific reason, and if you know the lengths of the strings,
 memcpy() is a better choice.

Syntax

void *memcpy(void *to, const void *from, size_t numBytes);
Complexity Analysis
Time Complexity: O(N)
Auxiliary Space: O(1)
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		--n;
		*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main (void) 
{
	const char 	src[50] = "https://www.tutorialspoint.com";
	char		dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);

	const char 	src2[50] = "https://www.tutorialspoint.com";
	char		dest2[50];
	strcpy(dest2,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest2);
	ft_memcpy(dest2, src2, strlen(src2)+1);
	printf("After memcpy dest = %s\n", dest2);

	char s1[20] = "GeeksforGeeks";
	char s2[20];

	// Function
	memcpy(s2, s1, strlen(s1));

	printf("%s\n", s2);

	char s1a[20] = "GeeksforGeeks";
	char s2a[20];

	// Function
	ft_memcpy(s2a, s1a, strlen(s1a));

	printf("%s\n", s2a);
	
	return(0);
}
*/
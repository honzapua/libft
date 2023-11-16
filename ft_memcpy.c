/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:55:29 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/16 18:14:05 by jsmidrka         ###   ########.fr       */
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

	return(0);
}
*/
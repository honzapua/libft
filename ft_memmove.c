/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:35:07 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/13 18:23:49 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

/*
NAME
memmove - copy memory area

SYNOPSIS
#include <string.h>
void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
The  memmove() function copies n bytes from memory area src to memory area 
dest.  The memory areas may overlap: copying takes place as though the bytes
in src are first copied into a temporary  array  that  does not overlap src or
dest, and the bytes are then copied from the temporary array to dest.

RETURN VALUE
The memmove() function returns a pointer to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			--i;
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		}
	}
	else if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			++i;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{#include "libft.h"
	//original memmove()
	char dest[] = "destination";
	const char src[]  = "source";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 4);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	//ft_memmove()
	char dest2[] = "destination";
	const char src2[]  = "source";
	printf("Before ft_memmove dest = %s, src = %s\n", dest2, src2);
	ft_memmove(dest2, src2, 4);
	printf("After ft_memmove dest = %s, src = %s\n", dest2, src2);

	return(0);
}
*/
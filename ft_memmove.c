/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:35:07 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/09 16:18:20 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       memmove - copy memory area

SYNOPSIS
       #include <string.h>

       void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
       The  memmove() function copies n bytes from memory area src to memory area dest.  The memory areas
       may overlap: copying takes place as though the bytes in src are first copied into a temporary  ar‐
       ray  that  does not overlap src or dest, and the bytes are then copied from the temporary array to
       dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		*dest +   = *src
	}
}

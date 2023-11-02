/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:56:29 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/02 19:16:46 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       memset - fill memory with a constant byte

SYNOPSIS
       #include <string.h>

       void *memset(void *s, int c, size_t n);

DESCRIPTION
       The  memset()  function  fills  the  first  n  bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.

ATTRIBUTES
       For an  explanation  of  the  terms  used  in  this  section,  see  at‐
       tributes(7).
*/

#include <stdio.h>
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*pos;

	i = 0;
	pos = (char *)s;
	while (i <= n)
	{
		pos[i] = c;
		i++;
	}
	return (pos);
}

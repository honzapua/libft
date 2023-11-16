/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:23:24 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/16 18:37:20 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	size_t	i;
// 	char	*pos;

// 	i = 0;
// 	pos = (char *)s;
// 	while (i <= n)
// 	{
// 		pos[i] = c;
// 		i++;
// 	}
// 	return (pos);
// }

/*
NAME
       bzero, explicit_bzero - zero a byte string

SYNOPSIS
       #include <strings.h>

       void bzero(void *s, size_t n);

       #include <string.h>

       void explicit_bzero(void *s, size_t n);

DESCRIPTION
       The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return ;
}

/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	buffer[80] = "Random text maximum 80 characters = one line";

	printf("buffer: %s\n", buffer);
	bzero(buffer, 80);
	printf("buffer: %s\n", buffer);
	return (EXIT_SUCCESS);
}
*/
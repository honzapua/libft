/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:09:08 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/13 18:31:30 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <string.h>
size_t strlen(const char *s);

size_t is an unsigned integer data type that is defined in various header files 
such as: <stddef.h>, <stdio.h>, <stdlib.h>, <string.h>, <time.h>, <wchar.h>

RETURN VALUE
The strlen() function returns the number of bytes in the string pointed to by s.

DESCRIPTION
The strlen() function calculates the length of the string pointed to by
s, excluding the terminating null byte ('\0').

RETURN VALUE
The strlen() function returns the number of bytes in the string pointed
to by s.

https://opensource.apple.com/source/Libc/Libc-262/i386/gen/strlen.c.auto.html
*/
// size_t	ft_strlen(const char *str)
// {
// 	long int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		++i;
// 	}
// 	return (i);
// }
size_t	ft_strlen(const char *str)
{
	const char	*ptr = str;

	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - str);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Honza is the best!";
	char str2[] = "42 rulezZz the world!";

	printf("String ft_strlen: %s has: %ld\n", str1, ft_strlen(str1));
	printf("String ft_strlen: %s has: %ld\n", str2, ft_strlen(str2));

	printf("String strlen: %s has: %ld\n", str1, strlen(str1));
	printf("String strlen: %s has: %ld\n", str2, strlen(str2));

	return (0);
}
*/
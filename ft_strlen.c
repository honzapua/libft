/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:09:08 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/10/31 15:45:36 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
size_t strlen(const char *s);


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


/*
size_t	strlen(const char *s)	
{
	const char	*str;
	const char	*s;

	for (s = str; *s; ++s);
	return(s - str);
}
*/
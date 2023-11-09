/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:17:28 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/09 19:17:08 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
C isprint()
checks for any printable character including space.
Those characters that occupies printing space are known as printable characters.

Printable characters are just the opposite of control characters which can be
 checked using iscntrl().

C isprint() Prototype
int isprint( int arg );
Function isprint() takes a single argument in the form of an integer and
 returns a value of type int.

Even though, isprint() takes integer as an argument, character is passed to
 the function. Internally, the character is converted to its ASCII value for
 the check.

If a character passed to isprint() is a printable character, it returns
 non-zero integer, if not it returns 0.

It is defined in <ctype.h> header file.

ASCII printable characters are the 95 characters in the ASCII character set
 that can be displayed on screen or printed on paper. They include letters,
 numbers, symbols, and punctuation marks, and are represented by codes
 32 to 126. These characters are used to create written text and other
 visual content.

https://opensource.apple.com/source/BerkeleyDB/BerkeleyDB-21/
db/clib/isprint.c.auto.html

// int	ft_isprint(int ch)
// {
// 	return ((ch >= ' ' && ch <= '~') ? 1 : 0);
// }
*/
int	ft_isprint(int ch)
{
	if (ch >= 20 && ch <= 126)
		return (ch);
	else
		return (0);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'Q';
	printf("Result when a printable character %c is passed to
	 isprint(): %d", c, ft_isprint(c));
	c = '\n';
	printf("\nResult when a control character %c is passed to isprint(): 
	%d \n", c, ft_isprint(c));

// for loop to List all Printable Characters Using isprint() function.
	for(c = 1; c <= 127; ++c)
		if (ft_isprint(c)!= 0)
			printf("%c ", c);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:01:39 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/10/27 19:12:48 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isascii()
checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.

*/

#include <stdio.h>
#include <unistd.h>
/*
// int	ft_isascii(int ch)
// {
// 	if (ch >= 0 && ch <= 127)
// 		return (1);
// 	else
// 		return (0);
// }

0x7f is 127 in decimal
& is bitwise operator and
	Binary AND Operator copies a bit to the result if it exists in both operands.
	(A & B) = 12, i.e., 0000 1100
~ Binary One's Complement Operator is unary and has the effect of 'flipping' bits.
	(~A ) = ~(60), i.e,. -0111101
*/
int	ft_isascii(int c)
{
	return (!(c & ~0x7f));
}

/*
int	main(void)
{
	char	c;

	// c = L'Á';
	c = L'Á';

	if (ft_isascii(c) == 0)
		printf("%c is not an ascii character.", c);
	else
		printf("%c is an ascii character.", c);

	printf("\n Enter a character: ");
	scanf("%c", &c);
	if (ft_isascii(c) == 0)
		printf("%c is not an ascii character.", c);
	else
		printf("%c is an ascii character.", c);
	return (0);
}
*/
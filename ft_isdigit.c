/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:34:03 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/10/27 16:59:30 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isdigit()
checks for a digit (0 through 9).

C isdigit()
Function Prototype of isdigit()
int isdigit( int arg );
Function isdigit() takes a single argument in the form of an integer and returns the value of type int.

Even though, isdigit() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.

It is defined in <ctype.h> header file.

C isdigit() Return value
Return Value	Remarks
Non-zero integer ( x > 0 )	Argument is a numeric character.
Zero (0)	Argument is not a numeric character.
*/

#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(char d)
{
	if (d >= '0' && d <= '9')
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char c;
	
	c='5';
	printf("Result when numeric character is passed %c: %d ", c, ft_isdigit(c));

	c='+';
	printf("\nResult when non-numeric character is passed %c: %d \n", c, ft_isdigit(c));

	//next example

	printf("Enter a character: ");
	scanf("%c",&c);

	if (ft_isdigit(c) == 0)
		printf("%c is not a digit.",c);
	else
		printf("%c is a digit.",c);
	return (0);
}
*/

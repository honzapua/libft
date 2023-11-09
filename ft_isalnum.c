/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:55:20 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/09 18:55:41 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_isalpha.c"	//not allowed in 42
// #include "ft_isdigit.c"	//not allowed in 42
/*
isalnum()
checks for an alphanumeric character; it is equivalent to
 (isalpha(c) || isdigit(c))

isalpha()
checks  for an alphabetic character; in the standard "C" locale, it is equiva‐
lent to (isupper(c) || islower(c)).  In some locales, there may be  additional
characters for which isalpha() is true—letters which are neither uppercase nor
lowercase.

C isalnum()
The function definition of isalnum() is:
int isalnum(int argument);

It is defined in the ctype.h header file.

isalnum() Parameters argument - a character
isalnum() Return Value:
Returns 1 if argument is an alphanumeric character.
Returns 0 if argument is neither an alphabet nor a digit.
*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	c;
	int	result;

	c = '5';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'Q';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'l';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '+';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	//next example
	
	printf("Enter a character: ");
	scanf("%c", &c);
	if (ft_isalnum(c) == 0)
	printf("%c is not an alphanumeric character.", c);
		else
	printf("%c is an alphanumeric character.", c);
	return (0);
}
*/
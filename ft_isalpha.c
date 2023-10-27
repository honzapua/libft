/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:57:49 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/10/27 16:02:40 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isalpha()
checks  for an alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
cales, there may be additional characters for which isalpha() is
true—letters which are neither uppercase nor lowercase.

C isalpha()
In C programming, isalpha() function checks whether a character is an alphabet (a to z and A-Z) or not.

If a character passed to isalpha() is an alphabet, it returns a non-zero integer, if not it returns 0.

The isalpha() function is defined in <ctype.h> header file.

C isalpha() Prototype
int isalpha(int argument);
Function isalpha() takes a single argument in the form of an integer and returns an integer value.

Even though, isalpha() takes integer as an argument, character is passed to isalpha() function.


Internally, the character is converted into the integer value corresponding to its ASCII value when passed.

isalpha() Return Value
Return Value	Remarks
Zero (0)	If the parameter isn't an alphabet.
Non zero number	If the parameter is an alphabet.
*/

#include <stdio.h>
#include <unistd.h>

int	ft_isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (2);
	else
		return (0);
}

int	ft_isalpha(char ch)
{
	if (ft_isupper(ch) || ft_islower(ch))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	str1;
	char	str2;
	char	str3;
	char	str4;
	char	str5;

	str1 = '\0';
	str2 = 'a';
	str3 = 'Z';
	str4 = '1';
	str5 = (char) '!';

	printf("str1: %c is alphabetic character only: %d \n", str1, ft_isalpha(str1));
	printf("str2: %c is alphabetic character only: %d \n", str2, ft_isalpha(str2));
	printf("str3: %c is alphabetic character only: %d \n", str3, ft_isalpha(str3));
	printf("str4: %c is alphabetic character only: %d \n", str4, ft_isalpha(str4));
	printf("str5: %c is alphabetic character only: %d \n", str5, ft_isalpha(str5));

	char c;

	printf("Enter a character: ");
	scanf("%c", &c);
	if (ft_isalpha(c) == 0)
		printf("%c is not an alphabet.", c);
	else
		printf("%c is an alphabet.", c);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:30:45 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/10/29 19:58:46 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 #include <ctype.h>

int toupper(int c);
int tolower(int c);

These functions convert lowercase letters to uppercase, and vice versa.

If c is a lowercase letter, toupper() returns its uppercase equivalent,
if an uppercase representation exists in the  current  locale.   Other‐
wise,  it  returns c.  The toupper_l() function performs the same task,
but uses the locale referred to by the locale handle locale.

If c is an uppercase letter, tolower() returns  its  lowercase  equiva‐
lent, if a lowercase representation exists in the current locale.  Oth‐
erwise, it returns c.  The tolower_l() function performs the same task,
but uses the locale referred to by the locale handle locale.

If  c  is neither an unsigned char value nor EOF, the behavior of these
functions is undefined.
RETURN VALUE
The value returned is that of the converted letter, or c if the conver‐
sion was not possible.
*/

#include <stdio.h>
#include <unistd.h>
#include "ft_isalpha.c"
// #include <ctype.h>

int	ft_toupper(int ch)
{
	if (ft_islower(ch))
		return (ch - (97 - 65));
	return (ch);
}
/*
int	main(void)
{
	char	c;

	c = 'm';
	printf("%c -> %c", c, ft_toupper(c));

	c = 'D';
	printf("\n%c -> %c", c, ft_toupper(c));

	c = '9';
	printf("\n%c -> %c", c, ft_toupper(c));

	return (0);
}
*/
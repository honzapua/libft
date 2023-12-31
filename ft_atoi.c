/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:22:54 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/08 17:29:40 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
atoi, atol, atoll - convert a string to an integer

SYNOPSIS
#include <stdlib.h>

int atoi(const char *nptr);
long atol(const char *nptr);
long long atoll(const char *nptr);

DESCRIPTION
The atoi() function converts the initial portion of the string pointed to
 by nptr to int.  The behavior is the same as

	strtol(nptr, NULL, 10);

except that atoi() does not detect errors.

The atol() and atoll() functions behave the same as atoi(), except that
 they convert the initial portion of the string to their return type of
 long or long long.

RETURN VALUE
The converted value or 0 on error.


Iterate through all characters of input string and update result (res)
take ASCII character of corresponding digit and subtract the code from '0'
to get numerical value and multiply res by 10 to shuffle digits left to
update running total. Loop ends when reach string terminator '\0'

1st while non printable characters
2nd while sign resolve
3rd composing number

// int	ft_atoi(char	*str)
// {
// 	int	i;
// 	int	sign;
// 	int	nbr;

// 	sign = 1;
// 	nbr = 0;
// 	i = 0;
// 	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
// 		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
// 	{
// 		++i;
// 	}
// 	while (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign *= -1;
// 		++i;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		nbr = (nbr * 10) + (str[i] - '0');
// 		++i;
// 	}
// 	nbr *= sign;
// 	return (nbr);
// }

*/

int	ft_isspace(int c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		++nptr;
	if ((*nptr == '+' || *nptr == '-'))
	{
		if (*nptr == '-')
			sign *= -1;
		++nptr;
	}
	while (ft_isdigit(*nptr))
	{
		number *= 10;
		number += *nptr - '0';
		++nptr;
	}
	return (sign * number);
}

/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	str[] = "+-+-4faljf";
	int	val = ft_atoi(str);

	printf("to parse:  %s\n", str);
	printf("get number: %d\n", val);

	char	*str2;
	str2 = "   ---+--+1234ab567";

	printf("to parse:  %s\n", str2);
	printf("get number: %d\n", ft_atoi(str2));
	return (0);
}
*/
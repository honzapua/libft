/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:55:20 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/10/26 19:10:50 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isalnum()
checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c))


The function definition of isalnum() is:

int isalnum(int argument);
It is defined in the ctype.h header file.

isalnum() Parameters
argument - a character
isalnum() Return Value
Returns 1 if argument is an alphanumeric character.
Returns 0 if argument is neither an alphabet nor a digit.

*/

#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include <stdio.h>
#include <unistd.h>

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
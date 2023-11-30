/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:51:12 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/30 17:55:18 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
Function name:
ft_strtrim

Prototype:
char *ft_strtrim(char const *s1, char const *set);

Parameters:
s1: The string to be trimmed.
set: The reference set of characters to trim.

Return value:
The trimmed string.
NULL if the allocation fails.

External functs.:
malloc

Description:
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	
}
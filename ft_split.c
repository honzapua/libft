/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:10:34 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/30 19:13:38 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
Function name:
ft_split

Prototype:
char **ft_split(char const *s, char c);

Parameters:
s: The string to be split.
c: The delimiter character.

Return value:
The array of new strings resulting from the split.
NULL if the allocation fails.

External functs.:
malloc, free

Description:
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/
char	**ft_split(char const *s, char c)
{
	
}
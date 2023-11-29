/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:43:01 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/29 20:10:36 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Prototype: 
char	*ft_strjoin(char const *s1, char const *s2);

Parameters:
s1: The prefix string.
s2: The suffix string

Return Value:
The new string.
NULL if the allocation fails.

External functions:
malloc

Description:
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strall;

	if (!s1 || !s2)
		return (NULL);
	
	while (*s1 != '\0')
	{
		*strall++ = *s1++;
	}

	while (*s2 != '\0')
	{
		*(strall -1)++ = *s2++;
	}
	return (strall);
}

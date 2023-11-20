/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:09:54 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/20 22:06:46 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
NAME
       strcmp, strncmp - compare two strings

SYNOPSIS
       #include <string.h>

       int strcmp(const char *s1, const char *s2);

       int strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
The  strcmp() function  compares the two strings s1 and s2.  The localeis not
taken into account (for a locale-aware comparison, see strcoll(3)).
The comparison is done using  unsigned characters.

strcmp() returns an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

       The  strncmp()  function is similar, except it compares only the first 
       (at most) n bytes of s1
       and s2.

RETURN VALUE
The strcmp() and strncmp() functions return an integer less than, equal to,
or  greater  than zero  if  s1 (or the first n bytes thereof) is found,
respectively, to be less than, to match,
or be greater than s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i + 1 < n)
		++i;
	if (n > 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		if (s1[i] == s2[i])
			--i;
		else
			return ((unsigned int)(s1[i]) - (unsigned int)(s2[i]));
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[20];
	char	str2[20];
	int	result;

	//Assigning the value to the string str1
	strcpy(str1, "helLo");

	//Assigning the value to the string str2
	strcpy(str2, "hellO WORLD");

	//This will compare the first 3 characters if 4 it 
	result = strncmp(str1, str2, 3);

	if (result > 0)
		printf("ASCII value of first unmatched character
		 of str1 is greater than str2");
	else if(result < 0)
		printf("ASCII value of first unmatched character 
		of str1 is less than str2");
	else 
		printf("Both the strings str1 and str2 are equal");
	return (0);
}
*/

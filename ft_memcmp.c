/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:26:00 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/22 15:59:44 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

/*
NAME
memcmp - compare memory areas

SYNOPSIS
#include <string.h>

int memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
The  memcmp()  function  compares the first n bytes (each interpreted as
 unsigned char) of the memory areas s1 and s2.

RETURN VALUE
The memcmp() function returns an integer less than, equal to, or  greater  than
  zero  if  the first  n bytes of s1 is found, respectively, to be less than,
  to match, or be greater than the first n bytes of s2.

For a nonzero return value, the sign is determined by the sign of the
difference between  the first pair of bytes (interpreted as unsigned char)
that differ in s1 and s2.

If n is zero, the return value is zero.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i)
		&& (i + 1 < n))
		++i;
	if (n > 0)
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	else
		return (0);
}
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[15];
	char	str2[15];
	int	ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);

	ret = ft_memcmp(str1, str2, 5);

	if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return (0);
}
*/
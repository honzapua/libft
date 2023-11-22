/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:30:47 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/22 20:13:12 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
strnstr — locate a substring in a string

LIBRARY
Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS
#include <string.h>
(See libbsd(7) for include usage.)

char	*strnstr(const char *big, const char *little, size_t len);

DESCRIPTION
The strnstr() function locates the first occurrence of the null-terminated 
string little in the string big, where not more than len characters are
 searched. Characters that appear after a
‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD
specific API, it should only be used when portability is not a concern.

RETURN VALUES
If little is an empty string, big is returned; if little occurs nowhere in big,
 NULL is re‐turned; otherwise a pointer to the first character of the first 
occurrence of little is re‐turned.

EXAMPLES
The following sets the pointer ptr to NULL, because only the first 4 characters
of largestring are searched:

	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 4);


Description
The C library function char *strstr(const char *haystack, const char *needle)
 function finds the first occurrence of the substring needle in the string
  haystack. The terminating '\0' characters are not compared.

Declaration
Following is the declaration for strstr() function.

char *strstr(const char *haystack, const char *needle)
Parameters
haystack − This is the main C string to be scanned.
needle − This is the small string to be searched with-in haystack string.

Return Value
This function returns a pointer to the first occurrence in haystack of any
 of the entire sequence of characters specified in needle, or a null pointer
  if the sequence is not present in haystack.
*/

/*
** strstr, strcasestr, strnstr -- locate a substring in a string
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters
** are searched.  Characters that appear after a `\0' character are not
** searched. Since the strnstr() function is a FreeBSD specific API, it
** should only be used when portability is not a concern.
*/
char	*strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] == big[i] && big[i] && i < len) 
		{
			++i;
			++j;
		}
	
	}
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char *)str);
	i = 0;
	while (str[i] && (size_t)i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && i + j < len)
			{
				if (to_find[j + 1] == '\0')
					return ((char *)&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

	
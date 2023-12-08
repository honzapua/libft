/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:56:29 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/08 18:45:03 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

/*
NAME
       memset - fill memory with a constant byte

SYNOPSIS
       #include <string.h>

       void *memset(void *s, int c, size_t n);

DESCRIPTION
       The  memset()  function  fills  the  first  n  bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.

ATTRIBUTES
       For an  explanation  of  the  terms  used  in  this  section,  see  at‐
       tributes(7).

https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
Description
The C library function void *memset(void *str, int c, size_t n) copies the
character c (an unsigned char) to the first n characters of the string
pointed to, by the argument str.

Declaration
Following is the declaration for memset() function.

void *memset(void *str, int c, size_t n)
Parameters
str − This is a pointer to the block of memory to fill.

c − This is the value to be set. The value is passed as an int, but the function
 fills the block of memory using the unsigned char conversion of this value.

n − This is the number of bytes to be set to the value.

Return Value
This function returns a pointer to the memory area str.

void *ft_memset(void *s, int c, size_t n)
{
    // While there are still bytes to set (n > 0)
    while (n > 0)
	// Set the byte at the current position to the specified value (c),
	// and then decrement the position (move to the previous byte).
	*((unsigned char *)s + (--n)) = (unsigned char)c;

    // Return the original pointer to the memory block.
    return (s);
}

*/
void	*ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
		*((unsigned char *)s + (--n)) = (unsigned char)c;
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);

	memset(str, '$', 3);
	puts(str);

	strcpy(str, "This is ft_memset() part of libft library function");
	puts(str);

	ft_memset(str, '$', 3);
	puts(str);

	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:05:40 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/05 18:50:57 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
Function name:
ft_striteri

Prototype:
void ft_striteri(char *s, void (*f)(unsigned int, char*));

Turn in files:

Parameters:
s: The string on which to iterate.
f: The function to apply to each character.

Return value:
NONE

External functs.
NONE

Description
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, (s + i));
		++i;
	}
	return ;
}

/*
#include <stdio.h>

// Example function to print the character and its index
void print_char_and_index(unsigned int index, char *c) {
    printf("Character at index %u: %c\n", index, *c);
}

// Example function to convert lowercase characters to uppercase
void convert_to_uppercase(unsigned int index, char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - ('a' - 'A');
	index++;
    }
}

int main() {
    char testString[] = "Hello, World!";
    
    // Test 1: Print characters and their indices
    printf("Test 1:\n");
    ft_striteri(testString, &print_char_and_index);

    // Test 2: Convert lowercase characters to uppercase
    printf("\nTest 2:\n");
    ft_striteri(testString, &convert_to_uppercase);
    printf("Modified String: %s\n", testString);

    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:55:51 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/04 20:09:11 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
If n is zero, returns 2. This is because the string representation of zero
requires two characters: one for the digit '0' and one for the null terminator.

If n is negative, increments res by 1. This is to account for the additional 
'-' character in the string representation of negative numbers.

Counts the number of digits in the absolute value of n. The loop increments
res for each digit until n becomes zero after successive division by 10.
*/
static unsigned int	get_size(int n)
{
	unsigned int	size_str;

	size_str = 1;
	if (n == 0)
		return (2);
	if (n < 0)
		++size_str;
	while (n != 0)
	{
		++size_str;
		n /= 10;
	}
	return (size_str);
}

/*
Function name:
ft_itoa

Prototype:
char *ft_itoa(int n);

Parameters:
n: the integer to convert.

Return Values:
The string representing the integer.
NULL if the allocation fails.

External functs:
malloc

Description:
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled

final_str[--size_str] = '\0';
Sets the last character of the string to the null terminator.

else if (n < 0 && final_str)
If n is negative, sets the first character of the string to '-' and then
 fills in the remaining digits of the absolute value of n in reverse order.

while (n > 0 && final_str)
fills in the remaining digits of n in reverse order.
*/
char	*ft_itoa(int n)
{
	unsigned int	size_str;
	char			*final_str;

	size_str = get_size(n);
	final_str = malloc(size_str * sizeof(char));
	if (final_str == NULL)
		return (final_str);
	final_str[--size_str] = '\0';
	if (n == 0 && final_str)
		final_str[0] = '0';
	else if (n < 0 && final_str)
	{
		final_str[0] = '-';
		final_str[--size_str] = '0' - (n % 10);
		n = -(n / 10);
	}
	while (n > 0 && final_str)
	{
		final_str[--size_str] = '0' + (n % 10);
		n /= 10;
	}
	return (final_str);
}
/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_itoa(int n, const char *expected_result)
{
    char *result = ft_itoa(n);
    if (result == NULL) {
        printf("Memory allocation failed for input: %d\n", n);
        return;
}

    if (strcmp(result, expected_result) == 0) {
        printf("PASS: %d -> %s\n", n, result);
    } else {
        printf("FAIL: %d -> %s (Expected: %s)\n", n, result, expected_result);
    }

    free(result);
}


// Include the ft_itoa function definition here

int	main(void) {
    // Test case 1: Positive integer
    test_itoa(123, "123");

    // Test case 2: Negative integer
    test_itoa(-456, "-456");

    // Test case 3: Zero
    test_itoa(0, "0");

    // Test case 4: Single-digit negative integer
    test_itoa(-7, "-7");

    // Test case 5: Large positive integer
    test_itoa(987654321, "987654321");

    // Test case 6: Large negative integer
    test_itoa(-987654321, "-987654321");

    // Test case 7: Minimum integer value
//     test_itoa(INT_MIN, "Failed to allocate memory");

    return (0);
}
*/
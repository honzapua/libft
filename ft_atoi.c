/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:22:54 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/10/29 20:42:13 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 
// A simple atoi() function
int	ft_atoi(char* str)
{
	// Initialize result
	int res = 0;

	// Iterate through all characters
	// of input string and update result
	// take ASCII character of corresponding digit and
	// subtract the code from '0' to get numerical
	// value and multiply res by 10 to shuffle
	// digits left to update running total
	for (int i = 0; str[i] != '\0'; ++i)
	res = res * 10 + str[i] - '0';

	// return result.
	return res;
}

// Driver Code
int	main()
{
	char str[] = "-89789";

	// Function call
	int val = myAtoi(str);
	printf("%d ", val);
	return 0;
}

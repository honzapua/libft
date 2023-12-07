/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:23:21 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/07 18:23:41 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
Function name:
ft_putnbr_fd

Prototype:
void ft_putnbr_fd(int n, int fd);

Parameters:
n: The integer to output.
fd: The file descriptor on which to write.

Return value:
None

External functs.:
write

Description:
Outputs the integer ’n’ to the given file
descriptor.

//digit = ('0' - (n % 10)); 
subtracting beacause n is negative number in if branch
- ((-n) %10)) double - is plus
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n < 0)
	{
		write(fd, "-", 1);
		digit = ('0' - (n % 10));
		if ((n / 10) != 0)
			ft_putnbr_fd(-(n / 10), fd);
	}
	else if (n < 10)
		digit = '0' + n;
	else
	{
		digit = '0' + (n % 10);
		ft_putnbr_fd((n / 10), fd);
	}
	write(fd, &digit, 1);
	return ;
}

/*
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 1234;
	n2 = -4321;

	ft_putnbr_fd(n1, 1);
	ft_putnbr_fd(n2, 1);
	ft_putnbr_fd(0, 1);
	return (0);
}
*/
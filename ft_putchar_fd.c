/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:14:25 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/07 16:44:54 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
Function name:
ft_putchar_fd

Prototype:
void ft_putchar_fd(char c, int fd);

Parameters:
c: The character to output.
fd: The file descriptor on which to write.

Return value:
None

External functs.:
write

Description Outputs the character ’c’ to the given file
descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

/*
int	main(void)
{
	ft_putchar_fd('a', 1);
	return (0);
}
*/

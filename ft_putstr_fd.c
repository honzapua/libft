/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:46:16 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/08 17:40:59 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	const char	*ptr_chr = str;

// 	while (*ptr_chr != '\0')
// 		ptr_chr++;
// 	return (ptr_chr - str);
// }

/*
Function name:
ft_putstr_fd

Prototype:
void ft_putstr_fd(char *s, int fd);

Parameters:
s: The string to output.
fd: The file descriptor on which to write.

Return value:
None

External functs.:
write

Description:
Outputs the string ’s’ to the given file
descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
	return ;
}

/*
int	main(void)
{
	char	*s;

	s = "Hello World!";
	ft_putstr_fd(s, 1);
	return (0);
}
*/
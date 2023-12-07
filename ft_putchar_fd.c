/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:56:29 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/07 14:34:38 by jan              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <sys/types.h>
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
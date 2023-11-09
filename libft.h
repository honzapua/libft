/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:39:35 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/11/09 19:23:54 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <stdint.h>
# include <unistd.h>

int	ft_isalpha(int argument);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);


void	*ft_memcpy(void *dest, const void *src, size_t n);





#endif // LIBFT_H MY_HEADER_FILE_H


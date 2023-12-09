/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:38:37 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/09 20:41:18 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
Function name:
ft_lstsize

Prototype:
int ft_lstsize(t_list *lst);

Parameters:
lst: The beginning of the list.

Return value:
The length of the list

External functs.:
None

Description:
Counts the number of nodes in a list.
*/
int	ft_lstsize(t_list *lst)
{
	int	result;

	if (lst == NULL)
		return (0);
	result = 1;
	while (lst->next)
	{
		lst = lst->next;
		++result;
	}
	return (result);
}

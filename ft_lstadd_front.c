/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:31:37 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/09 20:37:53 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function name:
ft_lstadd_front

Prototype:
void ft_lstadd_front(t_list **lst, t_list *new);

Parameters:
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.

Return value:
None

External functs.:
None

Description:
Adds the node ’new’ at the beginning of the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:48:56 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/09 21:37:56 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

// t_list	*ft_lstlast(t_list *lst)
// {
// 	if (lst == NULL)
// 		return (lst);
// 	while (lst->next)
// 		lst = lst->next;
// 	return (lst);
// }

/*
Function name:
ft_lstadd_back

Prototype:
void ft_lstadd_back(t_list **lst, t_list *new);

Parameters:
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.

Return value:
None

External functs.:
None

Description:
Adds the node ’new’ at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
	return ;
}

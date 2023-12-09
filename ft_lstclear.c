/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:04:43 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/09 21:23:57 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	if (lst == NULL || del == NULL)
// 		return ;
// 	del(lst->content);
// 	free(lst);
// 	return ;
// }

/*
Function name:
ft_lstclear

Prototype:
void ft_lstclear(t_list **lst, void (*del)(void*));

Parameters:
lst: The address of a pointer to a node.
del: The address of the function used to delete the content of the node

Return value:
None

External functs.:
free

Description:
Deletes and frees the given node and every
successor of that node, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	return ;
}

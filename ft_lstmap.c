/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:19:53 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/09 21:32:07 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*first_el(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	void	*cont;

	if (lst == NULL)
		return (NULL);
	cont = f(lst->content);
	res = ft_lstnew(cont);
	if (res == NULL)
		del(cont);
	return (res);
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*result;

// 	result = malloc(sizeof(t_list));
// 	if (result == NULL)
// 		return (result);
// 	result->content = content;
// 	result->next = NULL;
// 	return (result);
// }

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*tmp;

// 	if (lst == NULL || del == NULL)
// 		return ;
// 	while (*lst)
// 	{
// 		tmp = (*lst)->next;
// 		ft_lstdelone(*lst, del);
// 		*lst = tmp;
// 	}
// 	return ;
// }

/*
Function name:
ft_lstmap

Prototype:
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

Parameters:
lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.
del: The address of the function used to delete the content of a node if needed.

Return:
The new list.
NULL if the allocation fails.

External functs.:
malloc, free

Description:
Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new_node;
	void	*new_cont;

	res = first_el(lst, f, del);
	if (res == NULL)
		return (res);
	new_node = res;
	lst = lst->next;
	while (lst && res)
	{
		new_cont = f(lst->content);
		new_node->next = ft_lstnew(new_cont);
		new_node = new_node->next;
		if (new_node == NULL)
		{
			del(new_cont);
			ft_lstclear(&res, del);
		}
		lst = lst->next;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:11:10 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/09 21:19:46 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function name:
ft_lstiter

Prototype:
void ft_lstiter(t_list *lst, void (*f)(void *));

Parameters:
lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.

Return value:
None

External functs.:
None

Description:
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	return ;
}

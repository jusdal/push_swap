/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:59:25 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 01:54:08 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Iterates the list ’lst’ and applies the function ’f’ on the content of each 
 * node. Creates a new list resulting of the successive applications of the 
 * function ’f’. The ’del’ function is used to delete the content of a node 
 * if needed.
 * 
 * RETURN: 1) the new list;
 *              2) NULL (if unsuccessful); */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	newlist = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, tmp);
		lst = lst->next;
	}
	return (newlist);
}

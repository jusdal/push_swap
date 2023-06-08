/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:28:37 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/10 17:12:48 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Deletes and frees the given node and every successor of that node, using the 
 * function ’del’ and free(3). Finally, the pointer to the list must be set to
 * NULL.
 * 
 * RETURN: NONE; */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextnode;

	if (!lst)
		return ;
	while (ft_lstsize(*lst))
	{
		nextnode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextnode;
	}
	*lst = NULL;
}

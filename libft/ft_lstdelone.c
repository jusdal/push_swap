/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:13:31 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/10 16:52:28 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Takes as a parameter a node and frees the memory of the node’s content using 
 * the function ’del’ given as a parameter and free the node.  The memory of
 * ’next’ must not be freed.
 * 
 * RETURN: NONE; */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

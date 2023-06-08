/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:49:08 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/10 16:57:34 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Iterates the list ’lst’ and applies the function ’f’ on the content of each 
 * node.
 * 
 * RETURN: NONE; */

void	(ft_lstiter(t_list *lst, void (*f)(void *)))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

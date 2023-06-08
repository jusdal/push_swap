/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:34:49 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/10 16:47:26 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Adds the node ’new’ at the end of the list.
 *
 * RETURN: NONE; */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	else if (!(*lst))
		*lst = new;
	else
	{
		last = ft_lstlast(*(lst));
		last->next = new;
	}
}

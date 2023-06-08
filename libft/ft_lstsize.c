/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 03:57:26 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/10 17:02:54 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Counts the number of nodes in a list.
 * 
 * RETURN: the length of the list; */

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cur;

	i = 0;
	cur = lst;
	if (!lst)
		return (0);
	while (cur != NULL)
	{
		i++;
		cur = cur->next;
	}
	return (i);
}

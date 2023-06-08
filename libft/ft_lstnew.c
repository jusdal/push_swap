/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 01:23:35 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 00:41:00 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/* Allocates (with malloc) and returns a new node. The member variable 'content'
 * is initialized with the value of the parameter 'content'. The variable 'next'
 * is initialized to NULL.
 *
 * RETURN: new node; */

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode)
	{
		newnode->content = content;
		newnode->next = NULL;
	}
	return (newnode);
}

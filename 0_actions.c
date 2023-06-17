/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 00:01:05 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/17 23:51:26 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//swap
/*void	sa(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp;

	tmp = *a;
	a = a->next;
}
*/
//push
void	push(t_stack_node **dest, t_stack_node **src)
{
	t_stack_node	*node_to_push;

	if (!(*src))
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	if (!(*dest))
	{
		*dest = node_to_push;
		node_to_push->next = NULL;
	}
	else
	{
		node_to_push->next = *dest;
		*dest = node_to_push;
	}
}

//rotate
void	rotate(t_stack_node **stack)
{
	t_stack_node	*last_node;
	int				len;

	len = stack_len(*stack);
	if (!stack || !(*stack) || len == 1)
		return ;
	last_node = find_last_node(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	last_node->next->next = NULL;
}	

//reverse rotate

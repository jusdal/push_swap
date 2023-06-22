/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 00:01:05 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/21 19:58:19 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//swap
void	swap(t_stack_node **a)
{
	t_stack_node	*tmp;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
}

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
t_stack_node	*find_second_last_node(t_stack_node *stack)
{
	t_stack_node	*temp;

	temp = stack;
	while (temp->next->next)
		temp = temp->next;
	//printf("second to last = %d\n", temp->value);
	return (temp);
}

void	reverse_rotate(t_stack_node **a)
{
	t_stack_node	*last_node;
	t_stack_node	*second_last_node;
	int				len;

	len = stack_len(*a);
	if (!a || !(*a) || len == 1)
		return ;
	last_node = find_last_node(*a);
	second_last_node = find_second_last_node(*a);
	second_last_node->next = NULL;
	last_node->next = *a;
	*a = last_node;
}

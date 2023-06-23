/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_stack_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:15:02 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/23 17:10:49 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack_node *lst)
{
	int				i;
	t_stack_node	*cur;

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

t_stack_node	*find_last_node(t_stack_node *stack)
{
	t_stack_node	*cur;

	cur = stack;
	if (!cur)
		return (0);
	while (cur->next)
		cur = cur->next;
	return (cur);
}

/* function to see if stack is already sorted */
bool	stack_sorted(t_stack_node *stack)
{
	t_stack_node	*temp;
	int				min;

	temp = stack;
	min = INT_MIN;
	while (temp)
	{
		if (temp->value < min)
			return (false);
		min = temp->value;
		temp = temp->next;
	}
	return (true);
}

int	find_next_min(t_stack_node *stack, long curr_min)
{
	long				min;

	min = LONG_MAX;
	while (stack)
	{
		if (stack->value < min && stack->value > curr_min)
			min = stack->value;
		stack = stack->next;
	}
	return ((int)min);
}

void	assign_index(t_stack_node *a)
{
	int				i;
	int				len;
	long			min;
	t_stack_node	*temp;

	i = 1;
	len = stack_len(a);
	temp = a;
	min = find_next_min(a, LONG_MIN);
	while (i <= len)
	{
		while (a)
		{
			if (a->value == min)
			{
				a->index = i;
				min = find_next_min(temp, min);
				break ;
			}
			a = a->next;
		}
		a = temp;
		i++;
	}
}

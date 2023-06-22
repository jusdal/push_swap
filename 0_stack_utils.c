/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_stack_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:15:02 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/22 05:02:47 by justindaly       ###   ########.fr       */
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

/* function to see if stack is already sorted */
bool	stack_sorted(t_stack_node *stack)
{
	t_stack_node	*temp;
	int				min;

	temp = stack;
	min = INT_MIN;
	//printf("min = %d\n", min);
	while (temp)
	{
		//printf("temp->value = %d \\ min = %d\n", temp->value, min);
		if (temp->value < min)
		{
			//printf("STACK IS NOT SORTED!\n");
			return (false);
		}
		min = temp->value;
		temp = temp->next;
	}
	//printf("STACK IS SORTED!\n");
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
	int	i;
	int	len;
	long min;
	t_stack_node *temp;

	i = 1;
	len = stack_len(a);
	//printf("len = %d\n", len);
	temp = a;
	min = find_next_min(a, LONG_MIN);
	while (i <= len)
	{

		while (a)
		{
			//printf("min = %ld\n", min);
			if (a->value == min)
			{
				a->index = i;
				min = find_next_min(temp, min);
				//printf("index of value %d is %d\n", a->value, a->index);
				break ;
			}
			a = a->next;
		}
		a = temp;
		i++;
	}
}

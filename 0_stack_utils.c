/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_stack_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:15:02 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/17 21:18:49 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* function to see if stack is already sorted */
bool	stack_sorted(t_stack_node *stack)
{
	t_stack_node	*temp;
	int				min;

	temp = stack;
	min = temp->value;
	printf("min = %d\n", min);
	while (temp)
	{
		printf("temp->value = %d \\ min = %d\n", temp->value, min);
		if (temp->value < min)
		{
			printf("STACK IS NOT SORTED!\n");
			return (false);
		}
		temp = temp->next;
	}
	printf("STACK IS SORTED!\n");
	return (true);
}

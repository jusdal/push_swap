/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_errors.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:42:43 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/17 21:14:26 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char *message)
{
	ft_putstr_fd("Error\n", 1);
	ft_putstr_fd(message, 1);
	exit(EXIT_FAILURE);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_linkedlist(t_stack_node *stack)
{
	t_stack_node		*tmp;
	t_stack_node		*current;

	if (!stack)
		return ;
	current = stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	stack = NULL;
}

void	free_error(char *message, char **array)
{
	free_array(array);
	error(message);
}

void	free_ll_error(char *message, char **array, t_stack_node *stack)
{
	free_array(array);
	free_linkedlist(stack);
	error(message);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_errors.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:42:43 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/23 00:19:37 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	//ft_putstr_fd(message, 2);
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

void	free_error(char **array)
{
	free_array(array);
	error();
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

void	free_ll_error(char **array, t_stack_node *stack)
{
	free_array(array);
	free_linkedlist(stack);
	error();
}

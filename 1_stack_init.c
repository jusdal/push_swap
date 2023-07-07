/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_stack_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:55:24 by justindaly        #+#    #+#             */
/*   Updated: 2023/06/27 22:45:05 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* function to turn str into long to compare to int min/max */
long	ft_atol(char *str, char **array, t_stack_node *a)
{
	long	num;
	int		minuscounter;
	int		i;

	i = 0;
	minuscounter = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minuscounter = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
		free_ll_error(array, a);
	return (num * minuscounter);
}

/* function to check if number is a duplicate */
bool	check_dup(t_stack_node *a, int nbr)
{
	if (a == NULL)
		return (false);
	while (a)
	{
		if (a->value == nbr)
			return (true);
		a = a->next;
	}
	return (false);
}

void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->value = n;
	node->index = 0;
	if (*stack == NULL)
		*stack = node;
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
	}
}

/* create stack from 2d char array */
void	stack_init(t_stack_node **a, char **array)
{
	int		i;
	long	nbr;

	i = 0;
	while (array[i])
	{
		nbr = ft_atol(array[i], array, *a);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_ll_error(array, *a);
		if (check_dup(*a, nbr))
			free_ll_error(array, *a);
		append_node(a, (int)nbr);
		i++;
	}
	assign_index(*a);
	free_array(array);
}

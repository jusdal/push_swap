/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_sort_small.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:03:52 by justindaly        #+#    #+#             */
/*   Updated: 2023/06/23 17:13:26 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack_node **a, int t, int m, int b)
{
	if (t > m && m < b && b > t)
		sa(a);
	else if (t > m && m > b && b < t)
	{
		sa(a);
		reverse_rotate(a);
		ft_putstr_fd("rra\n", 1);
	}
	else if (t < m && m > b && b < t)
	{
		reverse_rotate(a);
		ft_putstr_fd("rra\n", 1);
	}
	else if (t < m && m > b && b > t)
	{
		sa(a);
		rotate(a);
		ft_putstr_fd("ra\n", 1);
	}
	else if (t > m && m < b && b < t)
		ra(a);
}

void	sort_four(t_stack_node **a, t_stack_node **b)
{
	int		len;
	int		i;

	len = stack_len(*a);
	i = 0;
	while (i < len)
	{
		if ((*a)->index == 1)
			break ;
		ra(a);
		i++;
	}
	pb(a, b);
	sort_three(a, (*a)->value, (*a)->next->value, (*a)->next->next->value);
	pa(a, b);
}

void	rotate_to_min(t_stack_node **a)
{
	int		len;
	int		i;

	len = stack_len(*a);
	i = 0;
	while (i < len)
	{
		if ((*a)->index <= 2)
			break ;
		ra(a);
		i++;
	}
}

void	sort_five(t_stack_node **a, t_stack_node **b)
{
	rotate_to_min(a);
	pb(a, b);
	rotate_to_min(a);
	pb(a, b);
	sort_three(a, (*a)->value, (*a)->next->value, (*a)->next->next->value);
	if ((*b)->index < (*b)->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
}

void	sort_small(t_stack_node **a, t_stack_node **b, int len)
{
	if (len == 2)
		sa(a);
	else if (len == 3)
		sort_three(a, (*a)->value, (*a)->next->value, (*a)->next->next->value);
	else if (len == 4)
		sort_four(a, b);
	else if (len == 5)
		sort_five(a, b);
}

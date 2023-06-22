/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_actions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:29:34 by justindaly        #+#    #+#             */
/*   Updated: 2023/06/22 15:27:19 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack_node **a)
{
	swap(a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack_node **b)
{
	swap(b);
	ft_putstr_fd("sb\n", 1);
}

void	ra(t_stack_node **a)
{
	rotate(a);
	ft_putstr_fd("ra\n", 1);
}

// void	rb(t_stack_node **b)
// {
// 	rotate(b);
// 	ft_putstr_fd("rb\n", 1);
// }

void	pa(t_stack_node **a, t_stack_node **b)
{
	push(a, b);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack_node **a, t_stack_node **b)
{
	push(b, a);
	ft_putstr_fd("pb\n", 1);
}

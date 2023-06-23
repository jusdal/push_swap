/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort_large.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 00:02:53 by justindaly        #+#    #+#             */
/*   Updated: 2023/06/23 17:16:21 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_bits(int num)
{
	int	count;

	count = 0;
	while (num)
	{
		count++;
		num >>= 1;
	}
	return (count);
}

void	radix_sort(t_stack_node **a, t_stack_node **b)
{
	int	len;
	int	bits;
	int	i;

	i = 0;
	bits = count_bits(stack_len(*a));
	while (i < bits)
	{
		len = stack_len(*a);
		while (len--)
		{
			if (((((*a)->index) >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

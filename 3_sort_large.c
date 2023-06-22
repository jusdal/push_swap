/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort_large.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 00:02:53 by justindaly        #+#    #+#             */
/*   Updated: 2023/06/23 00:07:06 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_bits(int num)
{   int	count;

	count = 0;
    while (num)
	{
		count++;
		num >>= 1;
	}
	return count;
}

void	radix_sort(t_stack_node **a, t_stack_node **b)
{
	int	len;
	int bits;
	int	i;

	i = 0;
	bits = count_bits(stack_len(*a));

	//printf("i = %d\n", i);
	while (i < bits)
	{
		len = stack_len(*a);
		while (len--)
		{
			if (((((*a)->index) >> i) & 1) == 0)
			{
				//printf("push %d -> b\n", (*a)->value);
				push(b, a);
				ft_putstr_fd("pb\n", 1);
			}
			else
			{
				//printf("rotate %d\n", (*a)->value);
				rotate(a);
				ft_putstr_fd("ra\n", 1);
			}
			//put_ll(*b);
		}
		while (*b)
		{
			push(a, b);
			ft_putstr_fd("pa\n", 1);
		}
		// printf("STACK A\n");
		// put_ll(*a);
		// printf("+++++++++++++++++++\n");
		// printf("END OF BIT %d\n", bits - i);
		i++;
	}
}
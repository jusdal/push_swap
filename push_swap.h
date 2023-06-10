/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:29:55 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/10 15:33:15 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct	s_stack_node
{
    int					value;
    int					current_position;
    int					final_index;
    int					push_price;
    bool				above_median;
    bool				cheapest;
    struct s_stack_node	*target_node;
    struct s_stack_node	*next;
    struct s_stack_node	*prev;
}	t_stack_node;
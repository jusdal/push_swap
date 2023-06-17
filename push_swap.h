/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:29:55 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/17 20:32:58 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <limits.h> //for INT_MIN INT_MAX
#include <stdio.h> //remove
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef	struct	s_stack_node
{
    int					value;
    int					current_position;
    int					final_index;
    // int					push_price;
    // bool				above_median;
    // bool				cheapest;
    struct s_stack_node	*target_node;
    struct s_stack_node	*next;
    //struct s_stack_node	*prev;
}	t_stack_node;

/* 0_errors.c */
void    error(char *message);
void	free_array(char **array);
void	free_error(char *message, char **array);
void    free_linkedlist(t_stack_node *stack);
void    free_ll_error(char *message, char **array, t_stack_node **stack);


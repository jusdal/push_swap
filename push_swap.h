/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:29:55 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/23 17:09:07 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h> //for INT_MIN INT_MAX
# include <stdio.h> //remove
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int						value;
	int						pos;
	int						index;
	struct s_stack_node		*next;
}	t_stack_node;

/* 0_actions1.c */
void			swap(t_stack_node **a);
void			push(t_stack_node **dest, t_stack_node **src);
void			rotate(t_stack_node **stack);
t_stack_node	*find_second_last_node(t_stack_node *stack);
void			reverse_rotate(t_stack_node **a);

/* 0_actions2.c */
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ra(t_stack_node **a);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **a, t_stack_node **b);

/* 0_errors.c */
void			error(void);
void			free_array(char **array);
void			free_error(char **array);
void			free_linkedlist(t_stack_node *stack);
void			free_ll_error(char **array, t_stack_node *stack);

/* 0_stack_utils.c */
int				stack_len(t_stack_node *lst);
t_stack_node	*find_last_node(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
int				find_next_min(t_stack_node *stack, long curr_min);
void			assign_index(t_stack_node *a);

/* 1_parse.c */
void			check_digit(char *str);
long			ft_atol(char *str, char **array, t_stack_node *a);
bool			check_dup(t_stack_node *a, int nbr);
void			append_node(t_stack_node **stack, int n, int pos);
void			stack_init(t_stack_node **a, char **array);

/* 2_sort_small.c */
void			sort_three(t_stack_node **a, int t, int m, int b);
void			sort_four(t_stack_node **a, t_stack_node **b);
void			rotate_to_min(t_stack_node **a);
void			sort_five(t_stack_node **a, t_stack_node **b);
void			sort_small(t_stack_node **a, t_stack_node **b, int len);

/* 3_sort_large.c */
int				count_bits(int num);
void			radix_sort(t_stack_node **a, t_stack_node **b);

#endif
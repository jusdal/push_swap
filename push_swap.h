/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:29:55 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/22 16:44:14 by justindaly       ###   ########.fr       */
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

/* 0_errors.c */
void	error(void);
void	free_array(char **array);
void	free_error(char **array);
void	free_linkedlist(t_stack_node *stack);
void	free_ll_error(char **array, t_stack_node *stack);

/* 0_stack_utils.c */
int				stack_len(t_stack_node *lst);
bool			stack_sorted(t_stack_node *stack);
t_stack_node	*find_last_node(t_stack_node *stack);
int				find_min(t_stack_node *stack);
void			assign_index(t_stack_node *a);

/* 0_actions.c */
void			swap(t_stack_node **a);
void			push(t_stack_node **dest, t_stack_node **src);
void			rotate(t_stack_node **stack);
t_stack_node	*find_second_last_node(t_stack_node *stack);
void			reverse_rotate(t_stack_node **a);

/* 0_actions.c */
void	sa(t_stack_node **a);
void	sb(t_stack_node **b);
void	ra(t_stack_node **a);
void	pa(t_stack_node **a, t_stack_node **b);
void	pb(t_stack_node **a, t_stack_node **b);


/* 1_sort_small.c */
void	sort_three(t_stack_node **a, int t, int m, int b);
void	sort_four(t_stack_node **a, t_stack_node **b);
void	rotate_to_min(t_stack_node **a);
void	sort_five(t_stack_node **a, t_stack_node **b);
void	sort_small(t_stack_node **a, t_stack_node **b, int len);

// /* print stacks */
// t_stack_node	*st_printstack(t_stack_node *stack, char *base, int max_value);
// int				st_printstack_ab(t_stack_node *a, t_stack_node *b, char *base);

#endif
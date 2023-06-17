/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:04:29 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/18 00:33:42 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// t_stack_node	*st_max(t_stack_node *stack)
// {
// 	t_stack_node	*max;

// 	max = NULL;
// 	while (stack)
// 	{
// 		if (!max || max->value < stack->value)
// 			max = stack;
// 		stack = stack->next;
// 	}
// 	return (max);
// }

// void	ft_putnchar_fd(int c, size_t n, int fd)
// {
// 	while (n > 0)
// 	{
// 		ft_putchar_fd(c, fd);
// 		n--;
// 	}
// }

// size_t		ft_nbrlen(int nbr, int base)
// {
// 	size_t	len;

// 	len = 0;
// 	if (nbr == 0)
// 		return (1);
// 	if (nbr < 0 && base == 10)
// 		len += 1;
// 	while (nbr)
// 	{
// 		nbr /= base;
// 		len += 1;
// 	}
// 	return (len);
// }

// void	ft_putnbr_base_fd(int nbr, char *str, int fd)
// {
// 	long int		base = ft_strlen(str);
// 	long int		num;

// 	num = nbr;
// 	if (num < 0 && base == 10)
// 		ft_putchar_fd('-', fd);
// 	if (num < 0)
// 		num = num * -1;
// 	if (num >= base)
// 		ft_putnbr_base_fd(fd, str, base);
// 	write(fd, &str[num % base], 1);
// }

// t_stack_node	*st_printstack(t_stack_node *stack, char *base, int max_value)
// {
// 	int	base_len;

// 	base_len = ft_strlen(base);
// 	if (stack)
// 	{
// 		if (stack->value >= 0)
// 			ft_putnchar_fd('0', 1, ft_nbrlen(max_value, base_len) - \
// 				ft_nbrlen(stack->value, base_len));
// 		ft_putnbr_base_fd(stack->value, base, 1);
// 		if (ft_nbrlen(stack->value, 10) > 7)
// 			ft_putnchar_fd('\t', 1, 1);
// 		else
// 			ft_putnchar_fd('\t', 1, 2);
// 		stack = stack->next;
// 	}
// 	else
// 	{
// 		ft_putchar_fd('.', 1);
// 		ft_putnchar_fd('\t', 1, 2);
// 	}
// 	return (stack);
// }

// void	st_printstack_ab(t_stack_node *a, t_stack_node *b, char *base)
// {
// 	t_stack_node	*max_a;
// 	t_stack_node	*max_b;

// 	if (!a && !b)
// 		return (ft_putstr_fd("Error\n", 2));
// 	write(1, "\n", 1);
// 	max_a = st_max(a);
// 	max_b = st_max(b);
// 	while (a || b)
// 	{
// 		if (max_a)
// 			a = st_printstack(a, base, *(int *)max_a->value);
// 		else
// 			a = st_printstack(a, base, 0);
// 		if (max_b)
// 			b = st_printstack(b, base, *(int *)max_b->value);
// 		else
// 			b = st_printstack(b, base, 0);
// 		ft_putchar_fd('\n', 1);
// 	}
// 	ft_putnchar_fd('-', 1, 10);
// 	ft_putstr_fd("\t", 1);
// 	ft_putnchar_fd('-', 1, 10);
// 	ft_putstr_fd("\na\t\tb\n\n", 1);
// 	return ;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/23 00:02:48 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <math.h>

// void	put_array(char **array)
// {
// 	int	i;

// 	if (!array)
// 		return ;
// 	i = 0;
// 	while (array[i])
// 	{
// 		printf("array[%d] = %s\n", i, array[i]);
// 		i++;
// 	}
// }
// void	put_ll(t_stack_node *stack)
// {
// 	t_stack_node	*ptr;

// 	if (stack == NULL)
// 	{
// 		ft_putstr_fd("Linked List is emtpy!\n", 1);
// 		return ;
// 	}
// 	ptr = stack;
// 	ft_putstr_fd("-----STACK-----\n", 1);
// 	while (ptr)
// 	{
// 		ft_putstr_fd("value = ", 1);
// 		ft_putnbr_fd(ptr->value, 1);
// 		ft_putstr_fd("\n", 1);
// 		// ft_putstr_fd("index = ", 1);
// 		// ft_putnbr_fd(ptr->index, 1);
// 		// ft_putstr_fd("\n", 1);
// 		ptr = ptr->next;
// 	}
// 	ft_putstr_fd("--------------\n", 1);
// }

char	**create_arg_array(int ac, char *av[])
{
	char	*str;
	char	**array;
	int		i;

	 if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
	 	exit(EXIT_SUCCESS);
	i = 1;
	str = ft_strdup("");
	while (av[i])
	{
		if (av[i][0] == '\0')
		{
			free(str);
			error();
		}
		else
			str = ft_strjoinspace(str, av[i]);
		i++;
	}
	//printf("str = %s\n", str);
	array = ft_split(str, ' ');
	free(str);
	return (array);
}

int	main(int ac, char *av[])
{
	char			**array;
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	array = create_arg_array(ac, av);
	stack_init(&a, array);
		//put_ll(a);
	if (stack_sorted(a) || stack_len(a) == 1)
	{
		free_linkedlist(a);
		exit(EXIT_SUCCESS);
	}
	else if (stack_len(a) <= 5)
		sort_small(&a, &b, stack_len(a));
	else
		radix_sort(&a, &b);
	free_linkedlist(a);
	free_linkedlist(b);
	//printf("----------------\n");
	//put_ll(a);
	//free_linkedlist(a);
	return (0);
}

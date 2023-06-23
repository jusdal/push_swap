/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/23 18:22:42 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**create_arg_array(int ac, char *av[])
{
	char	*str;
	char	**array;
	int		i;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	if (ac == 2)
		check_digit(av[1]);
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
	return (0);
}

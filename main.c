/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/27 18:24:39 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_digit(char *str)
{
	int	i;
	int	digits;

	i = 0;
	digits = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			digits++;
		if (!(ft_isdigit(str[i]) || str[i] == ' ' || str[i] == '-'
				|| str[i] == '+'))
			return (false);
		i++;
	}
	if (digits == 0)
		return (false);
	return (true);
}

char	**create_arg_array(int ac, char *av[])
{
	char	*str;
	char	**array;
	int		i;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	i = 1;
	str = ft_strdup("");
	while (av[i])
	{
		if ((check_digit(av[i]) == false) || (av[i][0] == '\0'))
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

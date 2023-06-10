/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/10 15:45:13 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <limits.h> //for INT_MIN INT_MAX
#include <stdio.h> //remove
#include <string.h>
#include <stdbool.h>

bool		stack_sorted(t_stack_node *stack)
{
		//write function to see if stack is already sorted
}

void	check_digit(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (!((ft_isdigit(str[i])) || str[i] == ' '))
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

long	atol(char *num)
{
	//write function to turn str into long number
}

bool		check_dup(t_stack_node *a, int nbr)
{
	//write function to check if number is a duplicate
	if (a == NULL)
		return (false);
	while (a)
	{
		if (a->value == nbr)
			return true;
		a = a->next;
	}
	return false;
}

void	append_node(t_stack_node *a, int n)
{
	t_stack_node *node;
	t_stack_node
}

stack_init(t_stack_node *a, char **array)
{
	//create stack from 2d char array
	//check for: 1)duplicates 2)min and max int number 3)syntax
	int		i;
	long	nbr;
	
	i = 0;
	while (array[i])
	{
		nbr = atol(array[i]);
		if (nbr > INT_MAX || nbr < INT_MIN) //check number against limits
			//free error
		if (check_dup(a, nbr)) //check duplicate
			//free error
		append_node(a, (int)nbr);
	}
	

	//maybe a flag?
}

int	main(int ac, char *av[])
{
	int i;
	char *str;
	char **array;

	i = 1;
	if (ac == 1 || !av[1][0])
		return (0);
	else
	{
		str = ft_strdup("");
		while(av[i])
		{
			str = ft_strjoinspace(str, av[i]);
			i++;
		}
		check_digit(str);
		array = ft_split(str, ' ');
		// printf("str = %s\n", str);
		// int j = 0;
		// while (array[j])
		// {
		// 	printf("array[%d] = %s\n", j, array[j]);
		// 	j++;
		// }
	}
}
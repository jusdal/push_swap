/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/10 18:12:44 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    put_array(char **array)
{
    int i = 0;
	while (array[i])
	{
		printf("array[%d] = %s\n", i, array[i]);
		i++;
	}
}

/*bool		stack_sorted(t_stack_node *stack)
{
		//write function to see if stack is already sorted
}
*/
char    **create_arg_array(char *argv[])
{
    char *str;
    char **array;

    str = ft_strdup("");
		while(av[i])
		{
			if (av[i][0] == '\0')
				error("Error\n");
			else
				str = ft_strjoinspace(str, av[i]);
			i++;	
		}
		check_digit(str);
		array = ft_split(str, ' ');
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
/*
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
} */

int	main(int ac, char *av[])
{
	int i;
	char **array;

	i = 1;
	if (ac == 1)
		return (0);
	else
	{
		array = create_arg_array(av);
		put_array(array);
	}
}
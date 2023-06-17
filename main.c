/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/17 18:29:54 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void    put_array(char **array)
{
    int i = 0;
	while (array[i])
	{
		printf("array[%d] = %s\n", i, array[i]);
		i++;
	}
}

void    put_ll(t_stack_node **stack)
{
    if (*stack == NULL)
        ft_putstr_fd("Linked List is emtpy!\n", 1);
    t_stack_node *ptr;
    ptr = *stack;
    while (ptr)
    {
        ft_putnbr_fd(ptr->value, 1);
        ft_putstr_fd("\n", 1);
        ptr = ptr->next;
    }
}

void	check_digit(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (!(ft_isdigit(str[i]) || str[i] == ' ' || str[i] == '-' || str[i] == '+'))
			error("Only use digits in the arguments");
		i++;
	}
}

char    **create_arg_array(char *av[])
{
    char	*str;
    char	**array;
    int		i;

	i = 1;
    str = ft_strdup("");
		while(av[i])
		{
			if (av[i][0] == '\0')
				error("There is an empty string\n");
			else
				str = ft_strjoinspace(str, av[i]);
            i++;
		}
        printf("str = %s\n", str);
		check_digit(str);
		array = ft_split(str, ' ');
        free(str);
        return (array);
}

/*bool		stack_sorted(t_stack_node *stack)
{
		//write function to see if stack is already sorted
}*/

t_stack_node	*find_last_node(t_stack_node **stack)
{
		if (!stack)
			return (0);
		while ((*stack)->next)
			*stack = (*stack)->next;
		return (*stack);
}

long	ft_atol(char *str)
{
	//write function to turn str into long number

	long	num;
	int		minuscounter;
	int		i;

	i = 0;
	minuscounter = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			num = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * minuscounter);
}

bool		check_dup(t_stack_node **a, int nbr)
{
	//write function to check if number is a duplicate
	if (a == NULL)
		return (false);
	while (*a)
	{
		if ((*a)->value == nbr)
			return true;
		*(a) = (*a)->next;
	}
	return false;
}

void	append_node(t_stack_node **stack, int n)
{
	t_stack_node *node;
	t_stack_node *last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node *));
	if (!node)
		return ;
	node->next = NULL;
	node->value = n;
	if (*(stack) == NULL) //if first node to be added
	{
		*(stack) = node; //set value of stack to this node
        printf("FIRST NODE ADDED\n");
		//node->prev = NULL; //set reverse field to NULL (first is last)
	}
	else // if not first node to be added
	{
		last_node = find_last_node(stack);
		last_node->next = node; //add new node to end
        printf("ANOTHER NODE ADDED\n");
		//node->prev = last_node; //set previous last node to prev
	}
}

void	stack_init(t_stack_node **a, char **array)
{
	//create stack from 2d char array
	//check for: 1)duplicates 2)min and max int number 3)syntax
	int		i;
	long	nbr;
	
	i = -1;
	while (array[++i])
	{
		nbr = atol(array[i]);
		if (nbr > INT_MAX || nbr < INT_MIN) //check number against limits
			free_ll_error("Number is out of range\n", array, a);
		if (check_dup(a, nbr)) //check duplicate
			free_ll_error("There is a duplicated number\n", array, a);
		append_node(a, (int)nbr);
	}
}

int	main(int ac, char *av[])
{
	char **array;
    t_stack_node *a;
    
    a = NULL;
	if (ac == 1)
		return (0);
	else
	{
		array = create_arg_array(av);
		put_array(array);
	}
    stack_init(&a, array);
    put_ll(&a);
	free_linkedlist(&a);
}
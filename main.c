/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/18 00:09:52 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	put_array(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		printf("array[%d] = %s\n", i, array[i]);
		i++;
	}
}

void	put_ll(t_stack_node *stack)
{
	t_stack_node	*ptr;

	if (stack == NULL)
		ft_putstr_fd("Linked List is emtpy!\n", 1);
	ptr = stack;
	while (ptr)
	{
		ft_putstr_fd("value = ", 1);
		ft_putnbr_fd(ptr->value, 1);
		ft_putstr_fd("\n", 1);
		ft_putstr_fd("index = ", 1);
		ft_putnbr_fd(ptr->index, 1);
		ft_putstr_fd("\n", 1);
		ptr = ptr->next;
	}
}

void	check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isdigit(str[i]) || str[i] == ' ' || str[i] == '-'
				|| str[i] == '+'))
			error("Only use digits in the arguments");
		i++;
	}
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

t_stack_node	*find_last_node(t_stack_node *head)
{
	t_stack_node	*cur;

	cur = head;
	if (!cur)
		return (0);
	while (cur->next)
		cur = cur->next;
	return (cur);
}

/* function to turn str into long to compare to int min/max */
long	ft_atol(char *str)
{
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

/* function to check if number is a duplicate */
bool	check_dup(t_stack_node *a, int nbr)
{
	if (a == NULL)
		return (false);
	while (a)
	{
		if (a->value == nbr)
			return (true);
		a = a->next;
	}
	return (false);
}

void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->value = n;
	node->index = 0;
	if (*stack == NULL) //if first node to be added
	{
		*stack = node; //set value of stack to this node
		printf("FIRST NODE ADDED\n");
		//node->prev = NULL; //set reverse field to NULL (first is last)
	}
	else // if not first node to be added
	{
		last_node = find_last_node(*stack);
		last_node->next = node; //add new node to end
		printf("ANOTHER NODE ADDED\n");
		//node->prev = last_node; //set previous last node to prev
	}
}

/* create stack from 2d char array
check for: 1)min and max int 2)duplicates*/
void	stack_init(t_stack_node **a, char **array)
{
	int		i;
	long	nbr;

	i = 0;
	put_array(array);
	while (array[i])
	{
		nbr = atol(array[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_ll_error("Number is out of range\n", array, *a);
		if (check_dup(*a, nbr))
			free_ll_error("There is a duplicated number\n", array, *a);
		append_node(a, (int)nbr);
		i++;
	}
}

void	radix_sort(t_stack_node **a, t_stack_node **b)
{
	int	len;
	int	bit;
	int i;
	int	j;

	len = stack_len(*a);
	bit = 9;
	i = 0;
	j = 0;

	while (i < bit)
	{
		while (j < len)
		{
			if (((*a)->index >> i) & 1)
				push(a, b);
			else
				rotate(a);
			j++;
		}
		while (*b)
			push(b, a);
		i++;
	}
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
	put_ll(a);
	stack_sorted(a);
	assign_index(a);
	st_printstack_ab(a, b, "10");
	radix_sort(&a, &b);
	st_printstack_ab(a, b, "10");

	//free_linkedlist(a);
}

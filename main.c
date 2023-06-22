/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/22 17:38:31 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <math.h>

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
	{
		ft_putstr_fd("Linked List is emtpy!\n", 1);
		return ;
	}
	ptr = stack;
	ft_putstr_fd("-----STACK-----\n", 1);
	while (ptr)
	{
		ft_putstr_fd("value = ", 1);
		ft_putnbr_fd(ptr->value, 1);
		ft_putstr_fd("\n", 1);
		// ft_putstr_fd("index = ", 1);
		// ft_putnbr_fd(ptr->index, 1);
		// ft_putstr_fd("\n", 1);
		ptr = ptr->next;
	}
	ft_putstr_fd("--------------\n", 1);

}

void	check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isdigit(str[i]) || str[i] == ' ' || str[i] == '-'
				|| str[i] == '+'))
			error();
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
			error();
		else
			str = ft_strjoinspace(str, av[i]);
		i++;
	}
	//printf("str = %s\n", str);
	check_digit(str);
	array = ft_split(str, ' ');
	free(str);
	return (array);
}

t_stack_node	*find_last_node(t_stack_node *stack)
{
	t_stack_node	*cur;

	cur = stack;
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

void	append_node(t_stack_node **stack, int n, int pos)
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
	node->pos = pos;
	node->index = 0;
	if (*stack == NULL) //if first node to be added
	{
		*stack = node; //set value of stack to this node
		//printf("FIRST NODE ADDED\n");
		//node->prev = NULL; //set reverse field to NULL (first is last)
	}
	else // if not first node to be added
	{
		last_node = find_last_node(*stack);
		last_node->next = node; //add new node to end
		//printf("ANOTHER NODE ADDED\n");
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
	//put_array(array);
	while (array[i])
	{
		nbr = atol(array[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_ll_error(array, *a);
		if (check_dup(*a, nbr))
			free_ll_error(array, *a);
		append_node(a, (int)nbr, i + 1);
		i++;
	}
	assign_index(*a);
	free_array(array);
}

int count_bits(int number)
{    
    return (log2(number) + 1);
}

void	radix_sort(t_stack_node **a, t_stack_node **b)
{
	int	len;
	int bits;
	int	i;

	i = 0;
	bits = count_bits(stack_len(*a));

	//printf("i = %d\n", i);
	while (i < bits)
	{
		len = stack_len(*a);
		while (len--)
		{
			if (((((*a)->index) >> i) & 1) == 0)
			{
				//printf("push %d -> b\n", (*a)->value);
				push(b, a);
				ft_putstr_fd("pb\n", 1);
			}
			else
			{
				//printf("rotate %d\n", (*a)->value);
				rotate(a);
				ft_putstr_fd("ra\n", 1);
			}
			//put_ll(*b);
		}
		while (*b)
		{
			push(a, b);
			ft_putstr_fd("pa\n", 1);
		}
		// printf("STACK A\n");
		// put_ll(*a);
		// printf("+++++++++++++++++++\n");
		// printf("END OF BIT %d\n", bits - i);

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
	//put_ll(a);
	if (stack_sorted(a))
		return (0);
	else if (stack_len(a) <= 5)
		sort_small(&a, &b, stack_len(a));
	else
		radix_sort(&a, &b);
	//assign_index(a);
	//put_ll(a);
	free_linkedlist(a);
	free_linkedlist(b);
	//printf("----------------\n");
	//put_ll(a);
	//free_linkedlist(a);
}

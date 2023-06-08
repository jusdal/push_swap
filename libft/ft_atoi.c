/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:26:46 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 02:01:57 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
 * Converts the initial portion of the string point to by str to int 
 * presentation. Removes white space and takes first -/+ sign; ignores the 
 * rest until it gets to digits then turns char into int;
 * 
 * RETURN: number as int; */

int	ft_atoi(const char *str)
{
	int	holder;
	int	minuscounter;
	int	i;

	i = 0;
	minuscounter = 1;
	holder = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minuscounter = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		holder = holder * 10 + (str[i] - '0');
		i++;
	}
	return (holder * minuscounter);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	c[] = "      -4543adaf";
	char	c2[] = "         ++214748364a325";
	char	c3[] = " \t \r \n \v \f 32432 42342";

	printf("my result = %d\n", ft_atoi(c));
	printf("my result = %d\n", ft_atoi(c2));
	printf("my result = %d\n", ft_atoi(c3));
	return (0);
}*/

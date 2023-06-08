/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:50:06 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/08 00:33:50 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
/* Allocates (with malloc) and returns a string representing the integer 
 * received as an argument. (int -> char)
 *
 * RETURN: 1) string representing the integer (if succesful);
 * 		2) Null (if unsuccessful); */

static int	num_of_char(int n)
{
	int				i;
	unsigned int	num;

	i = 1;
	num = n;
	if (n < 0)
	{
		i = 2;
		num = -n;
	}
	while (num > 9)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	num;
	char			*holder;

	holder = (char *)malloc(sizeof(char) * num_of_char(n) + 1);
	if (!holder)
		return (0);
	i = num_of_char(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		holder[0] = '-';
	}
	holder[i] = '\0';
	holder[i - 1] = '0';
	while (num > 0)
	{
		i--;
		holder[i] = num % 10 + '0';
		num = num / 10;
	}
	return (holder);
}
/*
#include <stdio.h>
int main(void)
{
    int n;

    n = -57;
    printf("string = %s\n", ft_itoa(n));
    printf("string = %s\n", ft_itoa(2147483647));
    printf("string = %s\n", ft_itoa(0));
    printf("string = %s\n", ft_itoa(-2147483648));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:07:08 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/10 22:28:44 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Computes the length of string s.
 *
 * RETURN: the number of characters that precede the terminating NUL 
 * 	character*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	char c[] = "test";
	char c1[] = "test test";
	char c2[] = "test test test";
	int i, j, k;
	i = ft_strlen(c);
	j = ft_strlen(c1);
	k = ft_strlen(c2);

	printf("str length = %d", i);
	printf("str length = %d", j);
	printf("str length = %d", k);
}*/

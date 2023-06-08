/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:48:18 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 16:51:50 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_memset() function writes len bytes of value c (converted to an
 * unsigned char) to the string b
 *
 * RETURN: first argument */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Hello, I'm a string.";

	printf("string before: %s\n", str);
	printf("return value: %s\n", ft_memset(str, '!', 40));
}*/

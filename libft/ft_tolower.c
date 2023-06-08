/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:33:49 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 01:09:36 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Converts an uppercase letter to lowercase
 *
 * RETURN: 1) if c is uppercase letter, return lowercase;
 * 		2) if c is not uppercase letter, return c unchanged; */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main()
{
	char    c = '3';
	char    c2 = 'h';
	char    c3 = 'J';
	char    c4 = 'K';
	
	printf("%c\n", ft_tolower(c));
	printf("%c\n", ft_tolower(c2));
	printf("%c\n", ft_tolower(c3));
	printf("%c\n", ft_tolower(c4));
}*/

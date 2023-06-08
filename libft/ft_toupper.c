/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:09:03 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 01:09:11 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_toupper() function converts a lower-case letter to the corresponding
 * upper-case letter.
 *
 * RETURN: 1) if c is lowercase letter, return uppercase;
 * 		2) if not a lowercase  letter, return c unchanged; */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	c = '3';
	char	c2 = 'h';
	char	c3 = 'j';
	char	c4 = 'K';

	printf("%c\n", ft_toupper(c));
	printf("%c\n", ft_toupper(c2));
	printf("%c\n", ft_toupper(c3));
	printf("%c\n", ft_toupper(c4));
}*/

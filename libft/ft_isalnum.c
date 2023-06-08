/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:46:47 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 16:28:34 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_isalnum() function tests for any character for which isalpha(3) or
 * isdigit(3) is true.  The value of the argument must be representable as an
 * unsigned char or the value of EOF.
 *
 * RETURN: 1) NULL if NOT alphanumeric;
 * 		2) 1 if alphanumeric; */

int	ft_isalnum(int c)
{
	if (!(((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			|| (c >= '0' && c <= '9')))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("my value = %d\n", ft_isalnum('1'));
	printf("my value = %d\n", ft_isalnum('-'));
}*/

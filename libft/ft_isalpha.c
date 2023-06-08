/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:08:33 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 22:01:39 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_isalpha() function tests for any character for which isupper(3) or
 * islower(3) is true.  The value of the argument must be representable as an
 * unsigned char or the value of EOF.
 *
 * RETURN: 1) NULL if alpha
 * 		2) 1 if not */

int	ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (0);
	else
		return (1);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("my value = %d\n", ft_isalpha('a'));
	printf("my value = %d\n", ft_isalpha('4'));
}*/

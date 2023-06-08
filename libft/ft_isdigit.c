/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:25:54 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 16:27:37 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_isdigit() function tests for a decimal digit character.  Regardless
 * of locale, this includes the following characters only:0 1 2 3 4 5 6 7 8 9
 *
 * RETURN: 1) NULL if not a digit;
 * 		2) 1 if a digit; */

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("my value = %d\n", ft_isdigit('1'));
	printf("my value = %d\n", ft_isdigit('a'));
}*/

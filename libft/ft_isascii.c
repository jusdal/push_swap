/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:51:01 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 16:29:08 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Tests if character is ASCII
 *
 * RETURN: 1) NULL if not ASCII;
 * 		2) 1 if ASCII; */

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("my value = %d\n", ft_isascii('1'));
	printf("value = %d\n", ft_isascii('a'));
	printf("my value = %d\n", ft_isascii('-'));
}
*/

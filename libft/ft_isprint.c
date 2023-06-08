/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:00:22 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 16:29:34 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Tests if character is printable or not
 *
 * RETURN: 1) 1 if printable;
 * 		2) NULL if not printable; */

int	ft_isprint(int c)
{	
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("my value = %d\n", ft_isprint('1'));
	printf("my value = %d\n", ft_isprint('a'));
	printf("my value = %d\n", ft_isprint('-'));
	printf("my value = %d\n", ft_isprint('\n'));
}*/

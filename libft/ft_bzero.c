/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 05:48:06 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 16:44:38 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The bzero() function writes n zeroed bytes to the string s.  If n is zero,
 * bzero() does nothing. */

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int main(void)
{
    char s[] = "I am a string.";
    printf("string = %s\n", s);
    ft_bzero(s, 2);
    printf("string = %s\n", s);
}*/

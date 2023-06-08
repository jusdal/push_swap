/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 06:46:47 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 02:05:57 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_memmove() function copies len bytes from string src to string dst.
 * The two strings may overlap; the copy is always done in a non-destructive
 * manner; handles overlap (vs memcpy).
 * 
 * RETURN: original value of dst */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*srcc;
	char	*dstc;

	i = -1;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (dst == src || !n)
		return (dst);
	if (srcc < dstc)
	{
		while (n > 0)
		{
			dstc[n - 1] = srcc[n - 1];
			n--;
		}
	}
	else
	{
		while (++i < n)
		{
				dstc[i] = srcc[i];
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[] = "ABCDEFGHIJKLMNOP";
    char *dst;

    dst = &src[2];

    printf("src = %s\n", src);
    printf("dst = %s\n", dst);
    ft_memmove(&src[7], src, 12);
    printf("after dst = %s\n", dst);
}*/

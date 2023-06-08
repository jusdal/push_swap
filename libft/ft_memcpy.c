/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 06:20:54 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/07 02:41:59 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
 * The memcpy() function copies n bytes from memory area src to memory area dst. 
 * If dst and src overlap, behavior is undefined. */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cdst;
	char	*csrc;

	if (!dst && !src)
		return (0);
	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = ;
    char dst[] = "Nothing.";
    
    printf("string = %s\n", dst);
    ft_memcpy(dst, str, 3);
    printf("string = %s\n", dst);
}*/

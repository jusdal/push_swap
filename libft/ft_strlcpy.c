/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:10:03 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/16 19:14:53 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copies src to dst and guarantees null-termination (if included in dstsize);
 *
 * RETURN: total length of the string it tried to create = length of src; */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
	char c[] = "123456789";
	char d[] = "012345678";
	int result;
	char c2[] = "Hello, I am a string.";
	char d2[] = "12345";
	int result2;

	result2 = ft_strlcpy(d2, c2, 6);
	printf("src length is %d; dest str = %s", result2, d2);
}*/

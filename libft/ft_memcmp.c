/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:16:00 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 18:07:49 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_memcmp() function compares byte string s1 against byte string s2. 
 * Both strings are assumed to be n bytes long.
 * 
 * RETURN: 1) 0 if identical strings;
 * 	if strings diff: difference between differing bytes (unisgned char) 
 * 
 * Use unsigned char to handle '\200' > '\0' */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)(s1);
	str2 = (unsigned char *)(s2);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    str1[] = "Hello, I'm a string.";
    char    str2[] = "Hello! I'm a string.";

    printf("myvalue = %d\n", ft_memcmp(str1, str2, 17));

}*/

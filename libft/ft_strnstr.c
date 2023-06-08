/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:43:06 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 22:04:06 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/* The ft_strnstr() function locates the first occurrence of the null-
 * terminated string needle in the string haystack, where not more than len 
 * characters are searched. Characters that appear after a `\0' character 
 * are not searched.
 *
 * RETURN: 1) needle empty: return haystack;
 * 			2) needle not found: NULL;
 * 				3) if found: pointer to first 
 * 				occurence of needle; */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*n;
	char	*h;

	i = 0;
	n = (char *)needle;
	h = (char *)haystack;
	if (n[0] == '\0')
		return (h);
	while (h[i] != '\0')
	{
		j = 0;
		if (h[i] == n[j])
		{
			while (h[i + j] == n[j] && (i + j) < len)
			{
				j++;
				if (n[j] == '\0')
					return (&h[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "for the win go";
    char to_find[] = "win";

    printf("pointer %c: %p\n",str[8],  &str[8]);
    printf("MY: %p\n", ft_strnstr(str, to_find, 8));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 06:30:01 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 17:43:05 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * The ft_memchr() function locates the first occurrence of c (converted to an 
 * unsigned char) in string s.
 *
 * RETURN: a pointer to the byte located, or NULL if no such byte exists within n
 * bytes. */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i;

	i = 0;
	ch = (unsigned char)(c);
	str = (unsigned char *)(s);
	while (n > i)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    str[] = "hello, I'm a string.";
    char    ch = '.';
    printf("value = %p\n", ft_memchr(str, ch, 22));
}*/

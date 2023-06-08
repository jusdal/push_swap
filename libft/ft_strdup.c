/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:29:33 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 02:06:47 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/* Allocates sufficient memory for a copy of the string s1, does the copy, 
 * and returns a pointer to it.
 *
 * RETURN: pointer to new copied string; */

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    char    s1[] = "Hello, I'm a string.";

    printf("s1 = %s\n", s1);
    printf("str = %s\n", ft_strdup(s1));
    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:53:25 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 00:43:01 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/* Allocates (with malloc(3)) and returns a substring from the string ’s’. The 
 * substring begins at index ’start’ and is of maximum size ’len’. 
 *
 * RETURN: 1) if successful: the substring;
 * 		2) if allocation fails: NULL; */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (ft_strlen(&s[start]) <= len)
		len = ft_strlen(&s[start]);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s[i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    char    s[] = "Hello, I'm a string.";
    printf("s = %s\n", s);
    printf("substr = %s\n", ft_substr(s, 3, 7));
    return (0);
}*/

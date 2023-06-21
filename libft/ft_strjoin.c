/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:16:13 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/20 18:14:24 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    char    s1[] = "Hello!";
    char    s2[] = "I'm a string.";

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("string = %s\n", ft_strjoin(s1, s2));
}*/

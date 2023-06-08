/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:42:32 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 22:01:01 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_strchr() function locates the first occurrence of c (converted to a 
 * char) in the string pointed to by s.  The terminating null character is 
 * considered to be part of the string; therefore if c is `\0', the functions 
 * locate the terminating `\0'.
 *
 * RETURN: 1) a pointer to the located character;
 * 		2) NULL if character not in string; */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char)c;
	while (s[i] && cc != s[i])
		i++;
	if (cc == s[i])
		return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    str[] = "Hello, I'm a string. How are you?";
    printf("value = %p\n", ft_strchr(str, 'o'));

}*/

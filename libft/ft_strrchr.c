/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:04:54 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 18:43:35 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The ft_strrchr() function is identical to strchr(), except it locates the
 * last occurrence of c.
 *
 * RETURN: 1) if in string, pointer to last occurence;
 * 		2) if not in string, NULL;	*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    str[] = "Hello, I'm a string. How are you?";
    printf("value = %p\n", ft_strrchr(str, 'z'));

}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:59:00 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/11 15:35:25 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/* Allocates (with malloc) and returns a copy of 's1' with the characters 
 * specified in 'set' removed from the beginning and the end of the string.
 *
 * RETURN: 1) the trimmed string (if successful);
 * 		2) NULL (if unsuccessful); */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	bgn;
	size_t	end;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		bgn = 0;
		end = ft_strlen(s1);
		while (s1[bgn] && ft_strrchr(set, s1[bgn]))
			bgn++;
		while (s1[end - 1] && ft_strrchr(set, s1[end - 1]) && end > bgn)
			end--;
		str = (char *)malloc(sizeof(char) * (end - bgn + 1));
		if (str)
			ft_strlcpy(str, &s1[bgn], end - bgn + 1);
		return (str);
	}
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("abcdcba", "abc"));
	printf("%s\n", ft_strtrim("xlemonyzzy", "xyz"));
	return 0;
}*/

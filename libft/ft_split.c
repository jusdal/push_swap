/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:06:24 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/07 18:26:47 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/* Allocates (withmalloc(3)) and returns an array of strings obtained by 
 * splitting ’s’ using the character ’c’ as a delimiter. The array must 
 * end with a NULL pointer.
 *
 * RETURN: 1) array of new strings resulting from split;
 * 		2) NULL if allocation fails; */

static int	ft_countwords(const char *s, char c)
{
	unsigned int	i;
	static int		wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			wc++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (wc);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * (n + 1));
	if (!str)
		return (0);
	while (i < n)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_createarray(char **array, const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			array[k++] = ft_strndup(&s[j], i - j);
	}
	array[k] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char			**array;

	if (!s)
		return (0);
	array = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!array)
		return (0);
	array = ft_createarray(array, s, c);
	return (array);
}

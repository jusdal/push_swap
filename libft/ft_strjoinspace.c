/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:28:36 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/10 14:06:39 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinspace(char *s1, char *s2)
{
	char	*str;
	int	len;
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 2));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, len + 2);
	str[ft_strlen(s1)] = ' ';
	ft_strlcat(str, s2, len + 2);
	free(s1);
	return (str);
}
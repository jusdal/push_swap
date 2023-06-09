/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:28:36 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/20 18:14:52 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strjoinspace(char *s1, char *s2)
{
	char	*str;
	int		len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + 1 + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, len);
	ft_strlcat(str, " ", len);
	ft_strlcat(str, s2, len);
	free(s1);
	return (str);
}

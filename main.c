/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:52:50 by jdaly             #+#    #+#             */
/*   Updated: 2023/06/10 14:11:57 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <string.h>


int	main(int ac, char *av[])
{
	int i;
	char *str;
	char **array;

	i = 1;
	if (ac == 1 || !av[1][0])
		return (0);
	else
	{
		str = ft_strdup("");
		while(av[i])
		{
			str = ft_strjoinspace(str, av[i]);
			i++;
		}
		array = ft_split(str, ' ');
		printf("str = %s\n", str);
		int j = 0;
		while (array[j])
		{
			printf("array[%d] = %s\n", j, array[j]);
			j++;
		}
	}
}
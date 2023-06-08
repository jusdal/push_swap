/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:19:06 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 01:45:47 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/* ft_calloc contiguously allocates enough space for count objects that are
 * size bytes of memory each and returns a pointer to the allocated memory.
 * The allocated memory is filled with bytes of value zero.
 *
 * RETURN: 1) pointer to memory, if successful;
 * 		2) NULL, if unsuccessful; */

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == SIZE_MAX || count == SIZE_MAX)
		return (0);
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
   printf("value = %p", ft_calloc(2, 4));
}*/

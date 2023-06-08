/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:12:31 by jdaly             #+#    #+#             */
/*   Updated: 2022/08/12 01:08:29 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Concatenate src to dst;
 * Ttakes the full size of the destination buffer and guarantees 
 * NUL-termination if there is room.  Note that room for the NUL
 * should be included in dstsize.
 *
 * ft_strlcat() appends string src to the end of dst.  It will append at most
 * dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
 * dstsize is 0 or the original dst string was longer than dstsize (in practice
 * this should not happen as it means that either dstsize is incorrect or that 
 * dst is not a proper string).
 *
 * If the src and dst strings overlap, the behavior is undefined.
 *
 * RETURN: the total length of the string it tried to create;
 * 	for strlcat() = initial length of dst plus the length of src; */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (i > dstsize || dstsize == 0)
		return (dstsize + ft_strlen(src));
	j = 0;
	while ((i + j + 1) < dstsize && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

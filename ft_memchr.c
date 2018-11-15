/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:42:05 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 09:43:17 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int seek, size_t howmany)
{
	size_t				k;
	unsigned char		*source;

	source = (unsigned char*)src;
	k = 0;
	while (k < howmany)
	{
		if (source[k] == (unsigned char)seek)
			return ((void *)source + k);
		k++;
	}
	return (NULL);
}

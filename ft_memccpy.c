/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:12:51 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 09:41:40 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int seek, size_t howmany)
{
	unsigned char		*temp_dest;
	unsigned char		*temp_src;
	size_t				k;

	k = 0;
	temp_dest = (unsigned char*)dest;
	temp_src = (unsigned char*)src;
	while (k < howmany)
	{
		temp_dest[k] = temp_src[k];
		if (temp_src[k] == (unsigned char)seek)
			return (dest + k + 1);
		k++;
	}
	return (NULL);
}

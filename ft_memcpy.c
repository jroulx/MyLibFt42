/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:46:43 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:42:32 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t howmany)
{
	size_t			k;
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	if (dest == src || howmany == 0)
		return (dest);
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	k = 0;
	while (k < howmany)
	{
		dest_temp[k] = src_temp[k];
		k++;
	}
	return (dest);
}

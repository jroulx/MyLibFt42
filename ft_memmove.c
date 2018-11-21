/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:48:55 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 13:59:35 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t howmany)
{
	const char		*src2;
	char			*dest2;
	size_t			k;

	k = 0;
	src2 = src;
	dest2 = dest;
	if (src2 < dest2)
	{
		while (k < howmany)
		{
			dest2[howmany - 1] = src2[howmany - 1];
			howmany--;
		}
	}
	else
		while (k < howmany)
		{
			dest2[k] = src2[k];
			k++;
		}
	return (dest);
}

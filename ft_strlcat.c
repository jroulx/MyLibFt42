/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:14:56 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:15:32 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		y;
	size_t		dest_len;
	size_t		src_len;

	y = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < dest_len + 1)
		return (size + src_len);
	if (size > dest_len + 1)
	{
		while (dest_len + y < size - 1)
		{
			dest[dest_len + y] = src[y];
			y++;
		}
		dest[dest_len + y] = '\0';
	}
	return (dest_len + src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:23:20 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:23:40 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t k;
	size_t y;

	y = 0;
	k = ft_strlen(dest);
	while (src[y] && (y < n))
	{
		dest[k] = src[y];
		k++;
		y++;
	}
	dest[k] = '\0';
	return (dest);
}

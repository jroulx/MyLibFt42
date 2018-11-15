/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:39:41 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:40:23 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t k;

	k = 0;
	while (k < n)
	{
		if (src[k])
			dest[k] = src[k];
		else
			while (k < n)
			{
				dest[k] = '\0';
				k++;
			}
		k++;
	}
	return (dest);
}

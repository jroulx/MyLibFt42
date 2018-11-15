/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:55:42 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 09:56:22 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int k;
	int y;

	y = 0;
	k = ft_strlen(dest);
	while (src[y])
	{
		dest[k] = src[y];
		k++;
		y++;
	}
	dest[k] = '\0';
	return (dest);
}

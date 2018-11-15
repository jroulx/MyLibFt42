/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:43:38 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 14:18:03 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			k;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	k = 0;
	while (k < n)
	{
		if (str1[k] != str2[k])
			return (str1[k] - str2[k]);
		k++;
	}
	if (str1[k - 1] == str2[k - 1])
		return (0);
	return (str1[k] - str2[k]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:38:33 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:31:43 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t		k;

	k = 0;
	while (str1[k] && str2[k] && (k < n))
	{
		if (str1[k] != str2[k])
			return (((unsigned char)str1[k]) - ((unsigned char)str2[k]));
		k++;
	}
	if (str1[k] == str2[k])
		return (0);
	return (*((unsigned char *)str1 + k) - *((unsigned char *)str2 + k));
}

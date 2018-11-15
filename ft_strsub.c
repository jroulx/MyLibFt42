/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:01:58 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 12:03:49 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	k;

	k = 0;
	if (!s)
		return (NULL);
	if (!(sub = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (k < len)
	{
		sub[k] = s[k + start];
		k++;
	}
	sub[k] = '\0';
	return (sub);
}

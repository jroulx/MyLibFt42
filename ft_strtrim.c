/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:04:21 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 12:48:54 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		s_strt(char const *str)
{
	size_t		k;

	k = 0;
	while (str[k] == ' ' || str[k] == '\n' || str[k] == '\t')
		k++;
	return (k);
}

static size_t		s_end(char const *str, size_t strsize)
{
	size_t		k;

	k = strsize;
	while (str[k - 1] == ' ' || str[k] == '\n' || str[k] == '\t')
	{
		k--;
		if (k == 0)
			return (strsize - k);
	}
	return (strsize - k);
}

char			*ft_strtrim(char const *s)
{
	char		*new_str;
	size_t		tot_spc;
	size_t		k;
	size_t		y;
	size_t		x;

	if (!s)
		return (NULL);
	if ((s_end(s, ft_strlen(s)) == ft_strlen(s) || (s_strt(s) == ft_strlen(s))))
		return (NULL);
	tot_spc = ft_strlen(s) - s_end(s, ft_strlen(s)) - s_strt(s);
	if (!(new_str = (char *)malloc(sizeof(char) * tot_spc + 1)))
		return (NULL);
	k = s_strt(s);
	y = s_end(s, ft_strlen(s));
	x = 0;
	while (k < ft_strlen(s) - y)
	{
		new_str[x] = s[k];
		k++;
		x++;
	}
	return (new_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:47:46 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 11:59:18 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*cpy_str(char const *src, char c)
{
	int		k;
	char	*str;

	k = 0;
	while (src[k] != c && src[k])
		k++;
	if (!(str = ft_strnew(k)))
		return (NULL);
	k = 0;
	while (src[k] != c && src[k])
	{
		str[k] = src[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

static int			nbr_words(char const *src, char sep)
{
	int		k;
	int		nbr;

	k = 0;
	nbr = 0;
	while (src[k])
	{
		while (src[k] == sep)
			k++;
		if (!(src[k]))
			return (nbr);
		if (src[k] != sep)
			nbr++;
		while (src[k] != sep && src[k])
			k++;
	}
	return (nbr);
}

char				**ft_strsplit(char const *s, char c)
{
	int		k;
	int		y;
	char	**tab;

	k = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * nbr_words(s, c) + 1)))
		return (NULL);
	y = 0;
	while (y < nbr_words(s, c))
	{
		while (s[k] == c)
			k++;
		if (!(tab[y] = cpy_str(s + k, c)))
			return (NULL);
		while (s[k] != c && s[k])
			k++;
		y++;
	}
	tab[y] = 0;
	return (tab);
}

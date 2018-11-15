/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:12:44 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:14:31 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	str_len;
	int				k;
	int				y;
	char			*join;

	if (!s1 || !s2)
		return (NULL);
	str_len = ft_strlen(s1) + ft_strlen(s2);
	k = 0;
	if (!(join = (char *)malloc(sizeof(char) * str_len + 1)))
		return (NULL);
	while (s1[k])
	{
		join[k] = s1[k];
		k++;
	}
	y = k;
	k = 0;
	while (s2[k])
	{
		join[y] = s2[k++];
		y++;
	}
	join[y] = s2[k];
	return (join);
}

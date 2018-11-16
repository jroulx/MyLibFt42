/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:42:56 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:45:39 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *source, const char *search, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			found;

	i = -1;
	found = 1;
	if (!ft_strlen(search))
		return ((char *)source);
	while (source[++i] && i < len)
	{
		j = 0;
		if (source[i] == search[0])
		{
			k = i;
			found = 1;
			while (source[k] && search[j] && j < len && k < len)
				if (source[k++] != search[j++])
					found = 0;
			if (found && !(search[j]))
				return ((char *)source + i);
		}
	}
	return (NULL);
}

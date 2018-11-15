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

char	*ft_strnstr(const char *meule_de_foin, const char *aiguille, size_t len)
{
	size_t		k;
	size_t		y;
	size_t		found;
	char		*location;

	k = -1;
	y = -1;
	found = 0;
	while (meule_de_foin[++k] && found == 0 && (k < len))
	{
		if (meule_de_foin[k] == aiguille[y])
		{
			while ((aiguille[++y]) && (meule_de_foin[k + y] == aiguille[y]))
				if (k + y > len)
					return (NULL);
			if (aiguille[y] == '\0')
			{
				location = (char*)meule_de_foin + k;
				found = 1;
			}
		}
		y = -1;
	}
	if (found == 1)
		return (location);
	return (NULL);
}

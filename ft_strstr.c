/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:59:30 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:38:51 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int		k;
	int		y;
	int		found;
	char	*location;

	k = -1;
	found = 0;
	if (!ft_strlen(aiguille))
		return ((char *)meule_de_foin);
	while (meule_de_foin[++k] && found == 0)
	{
		y = 0;
		if (meule_de_foin[k] == aiguille[y])
		{
			while ((meule_de_foin[k + y] == aiguille[y]) && (aiguille[y]))
				y++;
			if (aiguille[y] == '\0')
			{
				location = (char*)meule_de_foin + k;
				found = 1;
			}
		}
	}
	return ((found == 1) ? location : NULL);
}

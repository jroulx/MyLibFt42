/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:45:51 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:46:22 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		k;

	k = ft_strlen(s) + 1; 
	while (k-- > 0)
	{
		if (s[k] == (char)c)
		{
			return ((char *)s + k);
		}
	}
	return (NULL);
}
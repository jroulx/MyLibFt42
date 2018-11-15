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
	int k;
	int find;

	k = 0;
	find = -1;
	while (s[k])
	{
		if (s[k] == (char)c)
			find = k;
		k++;
	}
	if (find != -1)
		return ((char *)s + find);
	return (NULL);
}

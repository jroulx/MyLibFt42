/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:00:32 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:01:03 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int k;

	k = 0;
	while (str1[k] && str2[k])
	{
		if (str1[k] != str2[k])
			return (str1[k] - str2[k]);
		k++;
	}
	if (str1[k] == str2[k])
		return (0);
	return (str1[k] - str2[k]);
}

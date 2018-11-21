/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:07:22 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:52:04 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int						k;
	long long				entier;
	int						sign;

	k = 0;
	sign = 1;
	while (nptr[k] == '\n' || nptr[k] == '\t' ||
		nptr[k] == '\r' || nptr[k] == '\v' ||
		nptr[k] == '\f' || nptr[k] == ' ')
		k++;
	entier = 0;
	if (nptr[k] == '-')
		sign = -1;
	if (nptr[k] == '-' || nptr[k] == '+')
		k++;
	while (nptr[k] >= '0' && nptr[k] <= '9')
	{
		entier = (entier * 10) + (nptr[k] - '0');
		k++;
		if ((entier * sign > 2147483647) || entier * sign < -2147483648)
			return (0);
	}
	return (entier * sign);
}

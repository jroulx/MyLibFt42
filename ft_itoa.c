/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:33:16 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 13:55:56 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_size(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int nbr)
{
	char			*str;
	size_t			str_len;
	unsigned int	nbrcpy;

	str_len = nbr_size(nbr);
	nbrcpy = nbr;
	if (nbr < 0)
	{
		nbrcpy = -nbr;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = nbrcpy % 10 + '0';
	while (nbrcpy /= 10)
		str[--str_len] = nbrcpy % 10 + '0';
	if (nbr < 0)
		*(str + 0) = '-';
	return (str);
}

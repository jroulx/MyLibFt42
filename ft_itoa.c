/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:33:16 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 09:36:37 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		sizenbr(int nbr)
{
	int		nbr_size;
	int		k;

	k = 10;
	nbr_size = 1;
	while (nbr / k > 0)
	{
		k = k * 10;
		nbr_size++;
	}
	return (nbr_size);
}

static int		power10(int n)
{
	int		k;
	int		pwr;

	k = 0;
	pwr = 1;
	while (k < n)
	{
		pwr = pwr * 10;
		k++;
	}
	return (pwr);
}

char			*ft_itoa(int n)
{
	int		k;
	int		size;
	int		sign;
	char	*strnbr;

	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	size = sizenbr(n);
	if (!(strnbr = ft_strnew(size + sign)))
		return (NULL);
	if (sign == 1)
		strnbr[0] = '-';
	k = -1;
	while (++k < size - 1)
	{
		strnbr[k + sign] = (n / power10(size - 1 - k)) + '0';
		n = n % power10(size - 1 - k);
	}
	strnbr[k + sign] = (n + '0');
	strnbr[k + 1 + sign] = '\0';
	return (strnbr);
}

/*static size_t	get_str_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	n_cpy;

	str_len = get_str_len(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = n_cpy % 10 + '0';
	while (n_cpy /= 10)
		str[--str_len] = n_cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}*/
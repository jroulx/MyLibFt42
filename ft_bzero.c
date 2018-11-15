/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:19:12 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 09:15:11 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *source, size_t nbr)
{
	unsigned char	*temp_source;
	size_t			k;

	k = 0;
	temp_source = (unsigned char*)source;
	while (k < nbr)
	{
		temp_source[k] = '\0';
		k++;
	}
}

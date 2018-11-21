/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:41:46 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:32:10 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*newstr;
	char		*reset;
	size_t		k;

	k = 0;
	if (!(newstr = (char *)malloc((sizeof(char)) * size + 1)))
		return (NULL);
	reset = newstr;
	while (k <= size)
	{
		newstr[k] = '\0';
		k++;
	}
	return (reset);
}

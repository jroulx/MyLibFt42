/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:36:51 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/09 14:44:15 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La fonction memset() remplit les 'howmany' premiers octets de 
/la zone mémoire pointée par 'str' avec l'octet 'charac'. */ 
void	*ft_memset(void *str, int charac, size_t howmany)
{
	int					k;
	unsigned char		*str2;

	str2 = (unsigned char *)str;
	k = 0;
	while (k < howmany)
		str2[k++] = (unsigned char)charac;
	str = (void *)str2;
	return (str);
}
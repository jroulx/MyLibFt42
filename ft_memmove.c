/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:48:55 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 14:16:29 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t howmany)
{
	void		*temp[howmany];
	
	ft_memcpy(temp, src, howmany);
	ft_memcpy(dest, temp, howmany);
	return (dest);
}

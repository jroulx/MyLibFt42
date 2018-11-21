/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:02:35 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:00:12 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstring;

	if (!(newstring = (char*)malloc((sizeof(char)) * ft_strlen(s) + 1)))
		return (NULL);
	ft_memcpy(newstring, s, ft_strlen(s));
	newstring[ft_strlen(s)] = (char)s[ft_strlen(s)];
	return (newstring);
}

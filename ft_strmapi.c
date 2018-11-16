/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:19:05 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/15 10:20:23 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		k;
	int		str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (!(newstr = (char *)malloc(sizeof(char) * str_len + 1)))
		return (NULL);
	k = 0;
	while (k < str_len)
	{
		newstr[k] = f(k, s[k]);
		k++;
	}
	newstr[k] = '\0';
	return (newstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:16:54 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:00:45 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		newstr[k] = f(s[k]);
		k++;
	}
	newstr[k] = '\0';
	return (newstr);
}

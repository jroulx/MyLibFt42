/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:04:21 by jroulx            #+#    #+#             */
/*   Updated: 2018/11/21 14:33:29 by jroulx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*newstr;
	size_t		start;
	size_t		k;

	if (!s)
		return (NULL);
	k = 0;
	while ((s[k] == ' ' || s[k] == '\t' || s[k] == '\n') && s[k])
		k++;
	if (k == ft_strlen(s))
		return (ft_strnew(1));
	start = k;
	k = ft_strlen(s) - 1;
	while (s[k] == ' ' || s[k] == '\t' || s[k] == '\n')
		k--;
	if (!(newstr = ft_strsub(s, start, k - start + 1)))
		return (NULL);
	return (newstr);
}


#include "libft.h"

/*Alloue (avec malloc(3)) et retourne une copie de la chaine
/ passée en paramètre sans les espaces blancs au debut et à la
/ fin de cette chaine. On considère comme espaces blancs les
/ caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces
/ blancs au début ou à la fin, la fonction renvoie une copie de
/ s. Si l’allocation echoue, la fonction renvoie NULL.*/
static int 		spc_strt(char const *str)
{
	int		k;

	k = 0;
	while (str[k] == ' ' || str[k] == '\n' || str[k] == '\t')
		k++;
	return (k);
}

static int 		spc_end(char const *str, int strsize)
{
	int		k;

	k = strsize;
	while (str[k - 1] == ' ' || str[k] == '\n' || str[k] == '\t')
	{
		k--;
		if (k == 0)
			return (strsize - k);
	}
	return (strsize - k);
}

char			*ft_strtrim(char const *s)
{
	char	*new_str;
	int		size_s;
	int		tot_spc;
	int		k;
	int 	y;
	int		x;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s);
	if ((spc_end(s, size_s) == size_s) || (spc_strt(s) == size_s))
		return (NULL);
	tot_spc = size_s - spc_end(s, size_s) - spc_strt(s);
	if (!(new_str = (char *)malloc(sizeof (char) * tot_spc + 1)))
		return (NULL);
	k = spc_strt(s);
	y = spc_end(s, size_s);;
	x = 0;
	while (k < size_s - y)
	{
		new_str[x] = s[k];
		k++;
		x++;
	}
	return (new_str);
}


#include "libft.h"

/*Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
/ tronçon de la chaine de caractères passée en paramètre. Le
/ tronçon commence à l’index start et à pour longueur len. Si
/ start et len ne désignent pas un tronçon de chaine valide,
/ le comportement est indéterminé. Si l’allocation échoue, la
/ fonction renvoie NULL.*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int 	k;

	k = 0;
	if (!s)
		return (NULL);
	if(!(sub = (char *)malloc(sizeof (char) * len + 1)))
		return(NULL);	
	while (k < len)
	{
		sub[k] = s[k + start];
		k++;
	}
	sub[k] = '\0';
	return (sub);
}

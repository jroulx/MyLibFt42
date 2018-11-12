#include "libft.h"

/* Compare lexicographiquement s1 et s2. Si les deux chaines
/ sont égales, la fonction retourne 1, ou 0 sinon.*/

int		ft_strequ(char const *s1, char const *s2)
{
	int		k;

	if (!s1 || !s2)
		return (0);
	k = 0;
	while (s1[k] && s2[k] && (s1[k] == s2[k]))
		k++;
	if (!(s1[k]) && !(s2[k]))
		return (1);
	return (0);
}
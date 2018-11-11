
#include "libft.h"

/* Applique la fonction f à chaque caractère de la chaine de
/ caractères passée en paramètre. Chaque caractère est passé
/ par adresse à la fonction f afin de pouvoir être modifié si
/ nécessaire. */

void	ft_striter(char *s, void (*f)(char *))
{
	int		k;

	k = 0;
	if (s && f)
	{
		while (s[k])
		{
			f(s + k);
			k++;
		}
	}
}
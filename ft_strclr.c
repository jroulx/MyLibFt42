
#include "libft.h"

/*Assigne la valeur ’\0’ à tous les caractères de la chaine passée
/ en paramètre. */

void	ft_strclr(char *s)
{
	int k;

	k = 0;
	if (s)
	{	
		while (s[k])
			s[k++] = '\0';
	}
}
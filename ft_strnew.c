
#include "libft.h"

/*Alloue (avec malloc(3)) et retourne une chaine de caractère
/ “fraiche” terminée par un ’\0’. Chaque caractère de la chaine
/ est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie
/ NULL.*/
char	*ft_strnew(size_t size)
{
	char		*newstr;
	size_t		k;

	if(!(newstr = (char *)malloc((sizeof (char)) * size + 1)))
		return (NULL);
	while (k < size)
	{
		newstr[k] = 0;
		k++;
	}
	return (newstr);
}

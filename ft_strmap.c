#include "libft.h"

/*Applique la fonction f à chaque caractère de la chaine de caractères
/ passée en paramètre pour créer une nouvelle chaine
/ “fraiche” (avec malloc(3)) résultant des applications successives
/ de f.*/

 char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	int 	k;
	int 	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if(!(newstr = (char *)malloc(sizeof (char) * str_len + 1)))
		return (NULL);
	k = 0;
	while (k < str_len)
	{
		newstr[k] = f(s[k]);
		k++;		
	}
	return (newstr);
} 
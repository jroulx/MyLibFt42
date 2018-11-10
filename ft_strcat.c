#include "libft.h"

/*La fonction strcat() ajoute la chaîne src à la fin
/ de la chaîne dest en écrasant le caractère nul (« \0 »)
/ à la fin de dest, puis en ajoutant un nouveau caractère
/ nul final.*/

char	*ft_strcat(char *dest, const char *src)
{
	int k;
	int y;

	y = 0;
	k = ft_strlen(dest);
	while (src[y])
	{
		dest[k] = src[y];
		k++;
		y++;
	}
	dest[k] = '\0';
	return (dest);
}
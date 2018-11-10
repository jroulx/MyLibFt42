#include "libft.h"

/*La fonction strcat() ajoute la chaîne src à la fin
/ de la chaîne dest en écrasant le caractère nul (« \0 »)
/ à la fin de dest, puis en ajoutant un nouveau caractère
/ nul final.*/

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t k;
	size_t y;

	y = 0;
	k = ft_strlen(dest);
	while (src[y] && (y < n))
	{
		dest[k] = src[y];
		k++;
		y++;
	}
	dest[k] = '\0';
	return (dest);
}
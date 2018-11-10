#include "libft.h"

/*La fonction strcpy() copie la chaîne pointée par src
/ (y compris l'octet nul « \0 » final) dans la chaîne
/ pointée par dest. Les deux chaînes ne doivent pas se
/ chevaucher. La chaîne dest doit être assez grande
/ pour accueillir la copie.*/

char	*ft_strcpy(char *dest, const char *src)
{
	int k;

	k = 0;
	while (src[k])
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
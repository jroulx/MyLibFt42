#include "libft.h"

/*La fonction strcpy() copie la chaîne pointée par src
/ (y compris l'octet nul « \0 » final) dans la chaîne
/ pointée par dest. Les deux chaînes ne doivent pas se
/ chevaucher. La chaîne dest doit être assez grande
/ pour accueillir la copie.
/La fonction strncpy() est identique, sauf que seuls les
/n premiers octets de src sont copiés*/

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t k;

	k = 0;
	while (src[k] && (k < n))
	{
		dest[k] = src[k];
		k++;
	}
	while (!(src[k]) && k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
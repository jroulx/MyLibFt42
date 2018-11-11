#include "libft.h"

/*La fonction strnstr() cherche la première occurrence de la sous-chaîne
/ aiguille au sein de la chaîne meule_de_foin. Les caractères « \0 » de fin
/ ne sont pas comparés. -> jusqu'à 'len' */

char	*ft_strnstr(const char *meule_de_foin, const char *aiguille, size_t len)
{
	size_t k;
	size_t y;
	size_t found;
	char *location;

	k = 0;
	y = 0;
	found = 0;
	while (meule_de_foin[k] && found == 0 && (k < len))
	{
		if (meule_de_foin[k] == aiguille[y])
		{
			while ((meule_de_foin[k + y] == aiguille[y]) &&(aiguille[y]))
				y++;
			if (aiguille[y] == '\0')
			{
				location = (char*)meule_de_foin + k;
				found = 1;
			}
		}
		k++;
		y = 0;
	}
	if (found == 1)
		return (location);
	return (NULL);
}
/*La fonction memchr() examine les howmany premiers octets
/de la zone mémoire pointée par src à la recherche du
/caractère seek. Le premier octet correspondant à seek
/(interprété comme un unsigned char) arrête l'opération.*/
#include "libft.h"

void	*ft_memchr(const void *src, int seek, size_t howmany)
{
	size_t k;
	unsigned char* source;

	source = (unsigned char*)src;
	k = 0;
	while (k < howmany)
	{
		if (source[k] == (unsigned char)seek)
			return ((void *)source + k);
		k++;
	}
	return (NULL);
}
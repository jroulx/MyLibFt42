#include "libft.h"

/*La fonction memcmp() compare les n premiers octets des zones mémoire
/ s1 et s2. Elle renvoie un entier inférieur, égal, ou supérieur à zéro,
/  si s1 est respectivement inférieure, égale ou supérieur à s2.  */

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t k;
	unsigned char* str1;
	unsigned char* str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	k = 0;
	while (str1[k] && str2[k] && (k < n))
	{
		if (str1[k] != str2[k])
			return (str1[k] - str2[k]);
		k++;
	}
	if (str1[k] == str2[k])
		return (0);
	return (str1[k] - str2[k]);	
}

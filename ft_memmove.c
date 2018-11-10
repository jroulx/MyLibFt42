#include "libft.h"


/*La fonction memmove() copie n octets depuis la zone mémoire src vers la zone
/ mémoire dest. Les deux zones peuvent se chevaucher : la copie se passe comme
/ si les octets de src étaient d'abord copiés dans une zone temporaire qui ne 
/chevauche ni src ni dest, et les octets sont ensuite copiés de la 
zone temporaire vers dest.*/  

void	*ft_memmove(void *dest, const void *src, size_t howmany)
{
	void *temp;
	int k;

	k = 0;
	if (!(temp = (void *)malloc(sizeof(void *) * howmany)))
		return (NULL);
	ft_memcpy(temp, src, howmany);
	ft_memcpy(dest, temp, howmany);
	free(temp);
	return (dest);
}
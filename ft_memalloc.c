
#include "libft.h"

/*Alloue (avec malloc(3)) et retourne une zone de mémoire
“fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation
échoue, la fonction renvoie NULL. */

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if(!(mem = malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}		
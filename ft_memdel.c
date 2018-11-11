
#include "libft.h"

/*Prend en paramètre l’adresse d’un pointeur dont
/ la zone pointée doit être libérée avec free(3), 
/ puis le pointeur est mis à NULL.*/

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = 0;	
}
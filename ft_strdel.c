
#include "libft.h"

/*Prend en paramètre l’adresse d’une chaine de caractères qui
/ doit être libérée avec free(3) et son pointeur mis à NULL. */

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	free(*as);
	*as = NULL;
}
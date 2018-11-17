#include "libft.h"

/*Ajoute l’élément new en tête de la liste.*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
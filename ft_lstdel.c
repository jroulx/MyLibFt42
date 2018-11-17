
#include "libft.h"

/*Prend en paramètre l’adresse d’un pointeur sur un maillon et
libère la mémoire de ce maillon et celle de tous ses successeurs
l’un après l’autre avec del et free(3). Pour terminer,
le pointeur sur le premier maillon maintenant libéré doit être
mis à NULL (de manière similaire à la fonction ft_memdel de
la partie obligatoire).*/
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextlist;
	while (*alst)
	{
		nextlist = (*alst)->next;
		ft_lstdelone(&(*alst), del);
		*alst = nextlist;
	}	
}

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(&(*alst), del);
}
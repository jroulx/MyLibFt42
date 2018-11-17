#include "libft.h"

/*Parcourt la liste lst en appliquant à chaque maillon la fonction
f et crée une nouvelle liste “fraiche” avec malloc(3) résultant
des applications successives. Si une allocation échoue,
la fonction renvoie NULL*/
t_list		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*new;
	t_list	*list;

	list = f(lst);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}




























t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*list;

	if (!lst)
		return (NULL);
	list = f(lst);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}

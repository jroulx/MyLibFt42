#include "libft.h"

/*Parcourt la liste lst en appliquant à chaque maillon la fonction
f.*/
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list tmplst;
	tmplst = lst;
	while (tmplst)
	{
		f(tmplst);
		tmplst = tmplst->next;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst)
		return ;
	if (lst->next)
		ft_lstiter(lst->next, f);
	f(lst);
}
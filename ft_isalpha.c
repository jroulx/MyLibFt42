#include "libft.h"

/* Teste si 'c' est un caractère alphabétique
/ ou non*/
int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
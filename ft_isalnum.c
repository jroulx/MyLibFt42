#include "libft.h"

/* Teste si 'c' est un chiffre de 0 à 9 
/ OU un caractère alphab*/

int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
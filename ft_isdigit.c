#include "libft.h"

/* Teste si 'c' est un chiffre de 0 à 9 */

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
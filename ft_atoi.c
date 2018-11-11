
#include "libft.h"

/*La fonction atoi() convertit le début
/ de la chaîne pointée par nptr en entier de type int . */

int		ft_atoi(const char *nptr)
{
	int k;
	int entier;
	int sign;

	k = 0;
	sign = 1;
	while (nptr[k] == '\n' || nptr[k] == '\t' ||
		nptr[k] == '\r' || nptr[k] == '\v' ||
		nptr[k] == '\f' || nptr[k] == ' ')
		k++;
	entier = 0;
	if (nptr[k] == '-')
		sign = -1;
	if (nptr[k] == '-' || nptr[k] == '+')
		k++;

	while (nptr[k] >= '0' && nptr[k] <= '9')
	{
		entier = (entier * 10) + (nptr[k] - '0');
		k++;
	}
	return (entier * sign);
}

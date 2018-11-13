#include "libft.h"

/*Alloue (avec malloc(3)) et retourne une chaine de caractères
/ “fraiche” terminée par un ’\0’ représentant l’entier n passé
/ en paramètre. Les nombres négatifs doivent être gérés. Si l’allocation
/ échoue, la fonction renvoie NULL.*/

static int 		sizenbr(int nbr)
{
	int		nbr_size;
	int		k;

	k = 10;
	nbr_size = 1;
	while (nbr / k > 0)
	{
		k = k * 10;
		nbr_size++;
	}
	return (nbr_size);
}

static int		power10(int n)
{
	int		k;
	int 	pwr;

	k = 0;
	pwr = 1;
	while (k < n)
	{
		pwr = pwr * 10;
		k++;
	}
	return (pwr);
}

char			*ft_itoa(int n)
{
	int		k;
	int		size;
	int		sign;
	char	*strnbr;

	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	size = sizenbr(n);
	if(!(strnbr = ft_strnew(size + sign)))
		return (NULL);
	if (sign == 1)
		strnbr[0] = '-';
	k = 0;
	while (k < size - 1)
	{
		strnbr[k + sign] = (n / power10(size - 1 - k)) + '0';
		n = n % power10(size - 1 - k);
		k++;
	}
	strnbr[k + sign] = (n + '0');
	strnbr[k + 1 + sign] = '\0';
	return (strnbr);
}
#include "libft.h"

void	ft_putstr(char const *str)
{
	int k;

	k = 0;
	while (str[k])
	{
		ft_putchar(str[k]);
		k++;
	}
}

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		k;

	k = 0;
	while (s[k])
	{
		ft_putchar_fd(s[k], fd);
		k++;
	}
}
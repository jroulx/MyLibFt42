
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		k;

	if (!s1 || !s2)
		return (0);
	k = 0;
	while (s1[k] && s2[k] && (s1[k] == s2[k]) && (k < n))
		k++;
	if (!(s1[k]) && !(s2[k]))
		return (1);
	if ((k == n) && ((s1[k]) == (s2[k])))
		return (1);
	return (0);
}
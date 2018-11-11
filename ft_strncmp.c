#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int k;

	k = 0;
	while (str1[k] && str2[k] && (k < n))
	{
		if (str1[k] != str2[k])
			return (str1[k] - str2[k]);
		k++;
	}
	if (str1[k] == str2[k])
		return (0);
	return (str1[k] - str2[k]);	
}
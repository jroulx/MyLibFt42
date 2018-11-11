#include "libft.h"

/* La fonction strrchr() renvoie un pointeur
/sur la dernière occurrence du caractère c dans la chaîne s. */

char	*ft_strrchr(const char *s, int c)
{
	int k;
	int find;

	k = 0;
	find = -1;
	while (s[k])
	{
		if (s[k] == (char)c)
			find = k;
		k++;
	}
	if (find != -1)
		return ((char *)s + find);
	return (NULL);
}
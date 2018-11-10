#include "libft.h"

/* La fonction strchr() renvoie un pointeur sur la
/ première occurrence du caractère c dans la chaîne s. */
char	*ft_strchr(const char *s, int c)
{
	int k;

	k = 0;
	while (s[k] != (char)c && (s[k]))
		k++;
	if (s[k] == (char)c)
		return ((char *)s + k);
	return (NULL);
}
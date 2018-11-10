#include "libft.h"

/* La fonction strdup() renvoie un pointeur sur
/ une nouvelle chaîne de caractères qui est dupliquée
/ depuis s. La mémoire occupée par cette nouvelle
/ chaîne est obtenue en appelant malloc(3), et peut
/ (doit) donc être libérée avec free(3).*/
char	*ft_strdup(const char *s)
{
	char *newstring;

	if (!(newstring = (char*)malloc((sizeof (char)) * ft_strlen(s) + 1)))
		return (NULL);
	ft_memcpy(newstring, s, ft_strlen(s));
	return (newstring);
}
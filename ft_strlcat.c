#include "libft.h"

/*La fonction strcat() ajoute la chaîne src à la fin
/ de la chaîne dest en écrasant le caractère nul (« \0 »)
/ à la fin de dest, puis en ajoutant un nouveau caractère
/ nul final.*/

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	y;
	size_t	dest_len;
	size_t	src_len;

	y = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < dest_len + 1)
		return (size + src_len);
	if (size > dest_len + 1)
	{
		while (dest_len + y < size - 1)
		{
			dest[dest_len + y] = src[y];
			y++;
		}
		dest[dest_len + y] = '\0';
	}
	return (dest_len + src_len);
}
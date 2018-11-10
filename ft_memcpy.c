#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t howmany)
{
	int k;
	unsigned char *dest_temp;
	unsigned char *src_temp;

	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;

	k = 0;
	while (k < howmany)
	{
		dest_temp[k] = src_temp[k];
		k++;
	}
	return (dest);
}
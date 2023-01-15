#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*ptr;

	d = (unsigned char *) dst;
	ptr = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = ptr[i];
		if (d[i] == (unsigned char) c)
			return ((dst + i + 1));
		i++;
	}
	return (NULL);
}

#include "libft.h"

int	ft_memcmp(const void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*ptr;

	i = 0;
	d = (unsigned char *)dst;
	ptr = (unsigned char *)src;
	while (n > 0)
	{
		if (d[i] != ptr[i])
			return (d[i] - ptr[i]);
		i++;
		n--;
	}
	return (0);
}

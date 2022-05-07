#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*d;
	char	*ptr;

	d = (char *)dst;
	ptr = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	while (n > 0)
	{
		d[i] = ptr[i];
		i++;
		n--;
	}
	return (dst);
}

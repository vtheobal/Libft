#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*dst;
	unsigned char	pr;

	dst = (unsigned char *)s;
	pr = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (dst[i] == pr)
			return (&dst[i]);
		i++;
		n--;
	}
	return (NULL);
}

#include "libft.h"

char	*ft_strrchr (char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)ch)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

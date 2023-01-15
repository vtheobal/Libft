#include "libft.h"

char	*ft_strcdup(const char *s, int c)
{
	char    *copy;
    size_t  i;

    i = 0;
    while (s[i] != (char)c && s[i] != '\0')
        i++;
    if (!(copy = malloc(sizeof(char) * i + 1)))
        return (NULL);
    copy[i] = '\0';
    while (i-- > 0)
        copy[i] = s[i];
    return (copy);  
}
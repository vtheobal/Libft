#include "libft.h"

char    *ft_strndup(const char *s, size_t n)
{
    char    *copy;
    size_t  i;

    if(!(copy = malloc(sizeof(char) * n + 1)))
        return (NULL);
    i = 0;
    while (i < n && s[i] != '\0')
    {
        copy[i] = s[i];
        i++;
    } 
    copy[i] = '\0'; 
    return (copy);
}
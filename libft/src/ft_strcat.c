char    *ft_strcat(char *dst, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (dst);
}
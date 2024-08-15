#include <unistd.h>

unsiged int ft_strlen(char *str)
{
    unsigned int count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    len;

    len = ft_strlen(src);
    if (!dest || !src)
        return (0);
    if (size == 0)
        return (len);
    while (src[i] != '\0' && i + 1 < size)
    {
        dest[i] = src[i]
            i++;
    }

    dest[i] = '\0';
    return(len);
}

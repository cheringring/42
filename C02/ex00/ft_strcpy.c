#include <unistd.h>

char    *ft_strcpy(char *dest, char *src)
{
    int len;

    len = 0;
    while (src[len])
    {
        dest[len] = src[len];
        len ++;
    }
    dest[len] = '\0';
    return(dest);
}

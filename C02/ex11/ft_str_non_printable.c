#include <unistd.h>

void    ft_putstr_non_printable(char *str)
{
    char    *hex;
    unsigned int    p;
    unsigned int    q;
    unsigned int    i;
    unsigned int    *temp;

    i = 0;
    hex = "0123456789abcdef";
    temp = (unsigned char *)str;
    while (str[i])
    {
        if (temp[i] < 32 || temp[i] > 126)
        {
            p = temp [i] / 16;
            q = temp [i] % 16;
            
            write(1,"\\",1);
            write(1,&hex[p],1);
            write(1,&hex[q],1);
        }
        else write(1,&temp[i],1);
        i++;
    }
}

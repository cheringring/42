#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int i;

    i = nb;
    if (nb < 0 || nb > 12)
    {
        return (0);
    }
    else if (nb == 0 || nb == 1)
    {
        return (1);
    }
    while(i>1)
    {
        nb = nb * (i - 1);
        i--;
    }
    return (nb);
}

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int		check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, const char *base) {
    int base_len = 0;
    int nbr_final[32];
    int i = 0;

    if (!check_base(base)) return;

    while (base[base_len]) base_len++;

    if (nbr < 0) {
        ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr == 0) {
        ft_putchar(base[0]);
        return;
    }
    while (nbr) {
        nbr_final[i++] = nbr % base_len;
        nbr /= base_len;
    }
    while (--i >= 0) {
        ft_putchar(base[nbr_final[i]]);
    }
}

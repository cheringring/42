#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	print[5];
	char	sep[2];

	num1 = 0;
	print[2] = ' ';
	sep[0] = ',';
	sep[1] = ' ';
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			print[0] = '0' + num1 / 10;
			print[1] = '0' + num1 % 10;
			print[3] = '0' + num2 / 10;
			print[4] = '0' + num2 % 10;
			write(1, &print, 5);
			if (num1 != 98)
				write(1, &sep, 2);
			num2++;
		}
		num1++;
	}
}

int main(void)
{
    ft_print_comb2();
    return 0;
}

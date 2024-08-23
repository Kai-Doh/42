#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	ft_number(char d, char l)
{
	char	result;

	result = 0;
	if (l == 0)
		result = d / 10 + '0';
	else
		result = d % 10 + '0';
	return (result);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ft_number(a, 0));
			ft_putchar(ft_number(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_number(b, 0));
			ft_putchar(ft_number(b, 1));
			if (a < 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/

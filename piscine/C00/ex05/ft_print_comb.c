#include <unistd.h>

void	ft_putchar(char d)
{
	write (1, &d, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a < 55)
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/

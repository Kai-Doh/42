#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	n;

	n = 48;
	while (n < 58)
	{
		ft_putchar(n);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/

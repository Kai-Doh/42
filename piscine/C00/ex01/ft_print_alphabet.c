#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a < 123)
	{
		ft_putchar(a);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/

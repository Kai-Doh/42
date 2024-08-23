#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	r;

	r = 122;
	while (r > 96)
	{
		ft_putchar(r);
		r--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/

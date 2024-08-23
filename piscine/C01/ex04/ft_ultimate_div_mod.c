#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

int	main(void)
{
	int	c;
	int	d;

	c = 2;
	d = 5;
	ft_ultimate_div_mod(&c, &d);
	printf("%d = 2 / 5 et %d = 2 mod 5", c, d);
}

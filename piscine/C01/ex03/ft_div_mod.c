#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	c;
	int	d;
	int	div;
	int	mod;

	c = 5;
	d = 2;

	ft_div_mod(c, d, &div, &mod);
	printf("Div: %d and Mod: %d \n", div, mod);
}

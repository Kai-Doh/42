#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	c;
	int	d;

	c = 1;
	d = 2;
	printf(" c = %d and d = %d \n", c, d);
	ft_swap(&c, &d);
	printf(" the new value of c = %d and d = %d \n", c, d);
}

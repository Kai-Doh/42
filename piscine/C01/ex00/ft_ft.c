#include <unistd.h>
#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;

	a = 21;
	printf("Value of a before: %d", a);
	printf("\n");
	ft_ft(&a);
	printf("Value of a after: %d", a);
}

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	*c;

	c = "Hello, World!";
	ft_putstr(c);
}

/* in this exercise there is a close link between pointers of char and strings,
 * strings is an array of characters that is stored in a char. by using a pointer *str to a string in this case *c then
 * we can move to which character we would like to go with an str++ in the function putstr
 */

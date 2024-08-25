#include <stdio.h>

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s])
/* while (*(str + s)) this works too for the while loop. */
	{
		s++;
	}
	return (s);
}
/*
int	main(void)
{
	char	*h;

	h = "Hello, Bamboo lab u";
	ft_strlen(h);
	printf("Number of character = %d", ft_strlen(h));
}
* thing to note is that the while (*(str + s)) loop keeps on going until the string str in this case h = "Hello, Bamboo lab
 * u" reaches the end so 0 or null. once it reaches that then the while loop stops. AND THE VALUE OF S WILL DIRECT THE POINTER
 * STR TO THE RIGHT POSITION, IF WE CHANGE THE VALUE OF S MANUALLY THE POINTER STR WILL GO TO THE S POSITION OF THE CHARACTER IN ARRAY so the str in the loop is like a true and false condition if there is a character it is considered as true and the moment it reaches the value 0 which mean false then the loop stops. */

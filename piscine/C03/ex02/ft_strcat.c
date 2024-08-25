char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0')
	{
		dest[i] = src [s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}

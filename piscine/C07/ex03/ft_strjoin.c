/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:29:28 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/03 14:38:22 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int	ft_malloc(int size, char **strs, char *sep)
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (j++ < size - 1)
	{
		count = count + ft_strlen(strs[j]);
		if (j < size - 1)
		count = count + ft_strlen(sep);
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	*dest;

	count = ft_malloc(size, strs, sep);
	dest = (char *)malloc(sizeof(char) * count + 1);
	if (dest == NULL)
		return (NULL);
	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			dest[k++] = strs[j][i++];
		i = 0;
		while (sep[i] && j < size - 1)
			dest[k++] = sep[i++];
		j++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *sep;

	sep = "sep";
	if (argc != 0)
		printf("%s", ft_strjoin(argc, argv, sep));
}
*/
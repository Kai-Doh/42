/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:29:28 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/04 22:43:00 by ktiomico         ###   ########.fr       */
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

int	ft_count(int size, char **strs, char *sep)
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (j < size)
	{
		count = count + ft_strlen(strs[j]);
		j++;
		if (j < size)
		{
			count = count + ft_strlen(sep);
		}
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

	count = ft_count(size, strs, sep);
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

	sep = " ";
	if (argc != 1)
		printf("%s", ft_strjoin(3, argv, sep));
	free(ft_strjoin(3, argv, sep));
}
*/

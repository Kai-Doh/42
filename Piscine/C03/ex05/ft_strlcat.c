/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:40:36 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/29 14:49:32 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	idxdest;
	unsigned int	idxsrc;

	idxdest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	idxsrc = 0;
	if (size < 1)
		return (lensrc + size);
	while (((idxdest + idxsrc) < size - 1) && src[idxsrc])
	{
		dest[idxdest + idxsrc] = src[idxsrc];
		idxsrc++;
	}
	dest[idxdest + idxsrc] = '\0';
	if (size < idxdest)
		return (lensrc + size);
	else
		return (idxdest + lensrc);
}
/*
int	main(void)
{
	char	dest[8];
	char	src[6];

	strcpy(dest, "Hello ");
	strcpy(src, "World");
	printf("%d\n", ft_strlcat(dest, src, 7));
}
*/

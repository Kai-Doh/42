/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:35:36 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/26 09:45:02 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strlen(char *str)
{
	unsigned int	indexstr;

	indexstr = 0;
	while (str[indexstr])
	{
		indexstr++;
	}
	return (indexstr);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	indexd;
	unsigned int	indexs;

	indexd = ft_strlen(dest);
	indexs = 0;
	while (indexs < nb && src[indexs])
	{
		dest[indexd + indexs] = src[indexs];
		indexs++;
	}
	dest[indexd + indexs] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[15];
	char	*src;

	strcpy(dest, "Hello ");
	src = "World!";
	printf("%s", ft_strncat(dest, src, 3));
}
*/

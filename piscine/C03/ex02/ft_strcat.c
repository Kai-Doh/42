/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:40:36 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/26 14:00:33 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strlen(char *str)
{
	int	indexstr;

	indexstr = 0;
	while (str[indexstr])
	{
		indexstr++;
	}
	return (indexstr);
}

char	*ft_strcat(char *dest, char *src)
{
	int	indexd;
	int	indexs;

	indexd = ft_strlen(dest);
	indexs = 0;
	while (src[indexs])
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
	printf("%s\n", ft_strcat(dest, src));
}
*/

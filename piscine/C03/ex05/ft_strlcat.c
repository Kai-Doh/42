/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:40:36 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/28 14:31:04 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	unsigned int	indexd;
	unsigned int	lengths;
	unsigned int	indexs;
	unsigned int	lengthd;

	indexd = ft_strlen(dest);
	indexs = 0;
	lengthd = ft_strlen(dest);
	lengths = ft_strlen(src);
	if (size < 1)
		return (lengths + size);
	while (src[indexs] && (indexd < size - 1))
	{
		dest[indexd] = src[indexs];
		indexd++;
		indexs++;
	}
	dest[indexd] = '\0';
	if (size < lengthd)
		return (lengths + size);
	else
		return (lengthd + lengths);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:40:36 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/26 14:00:33 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	len;

	len = ft_strlen(dest);
	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i < (size - 1) && src[s] != '\0')
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (len + ft_strlen(src));
}

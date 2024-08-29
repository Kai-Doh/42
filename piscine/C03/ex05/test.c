/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:40:36 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/28 12:17:14 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i < (size - 1) && src[s] != '\0')
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i] = '\0';
	return (i + s);
}

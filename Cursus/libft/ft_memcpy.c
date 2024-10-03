/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 02:44:15 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/03 12:29:39 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t num)
{
	size_t	i;

	i = 0;
	if (!dest && !src && num > 0)
		return (NULL);
	if (dest != src)
	{
		while (i < num)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[10];
	char *src = "Hello.";

	printf("%s", (char *)ft_memcpy(dest, src, 10));
}
*/

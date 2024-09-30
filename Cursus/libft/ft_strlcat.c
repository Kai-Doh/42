/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:47:13 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/30 21:07:51 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen((char *)src);
	dest_length = ft_strlen(dest);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
/*
int	main(void)
{
    char dest[8] = "Hi, ";
    char *src = "Hello.";

    printf("Before strlcat: %s\n", dest);
    printf("Return value: %li\n", ft_strlcat(dest, src, 8));
    printf("After strlcat: %s\n", dest);

    return (0);
}
*/

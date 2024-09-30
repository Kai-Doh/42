/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 02:39:38 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/01 01:06:03 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t num)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < num)
	{
		str[i] = '0';
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[10];

	ft_bzero(str, 10);
	printf("%s", str);
}
*/

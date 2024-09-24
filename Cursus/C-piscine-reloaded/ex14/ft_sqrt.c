/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:32:45 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/24 14:54:24 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
	{
		if (i >= 46341)
			return (0);
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb;

	nb = 2147395600;
	printf("%i", ft_sqrt(nb));
	return (0);
}
*/

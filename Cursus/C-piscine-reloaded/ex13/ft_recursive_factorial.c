/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:27:31 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/24 14:45:39 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recusrive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recusrive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb = 3;
	printf("%i", ft_recusrive_factorial(nb));
	return (0);
}
*/

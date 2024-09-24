/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:13:34 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/24 14:45:25 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb > 0)
	{
		result = result * nb;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int nbr = 13;
	int result;

	result = ft_iterative_factorial(nbr);
	printf("%i\n", result);
	return (0);
}
*/

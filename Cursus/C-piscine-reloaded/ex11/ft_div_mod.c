/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:06:32 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/24 14:12:53 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 12;
	int	b = 6;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div: %i\nmod: %i\n", div, mod);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:01:20 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/24 14:06:10 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 32;
	int b = 42;

	printf("value of a: %i\nvalue of b: %i\n", a, b);
	ft_swap(&a, &b);
	printf("ft_swap(&a, &b)\nvalue of a: %i\nvalue of b: %i\n", a, b);
	return (0);
}
*/

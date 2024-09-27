/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 00:13:33 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/03 00:25:57 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	n;

	n = 48;
	while (n < 58)
	{
		ft_putchar(n);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/

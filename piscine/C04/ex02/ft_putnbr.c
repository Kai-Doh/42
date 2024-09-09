/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:25:07 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/09 23:27:43 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 12);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	if (nb >= 10)
	{
	  ft_putnbr(nb / 10);
	}
  ft_putchar(nb % 10 + '0');
  return;
}
/*
int	main()
{
	int	i;

	i = 123;
	ft_putnbr(i);
}
*/

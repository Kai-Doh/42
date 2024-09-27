/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:39:32 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/25 15:42:33 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	writel(char begin, char mid, char end, int lengthx)
{
	ft_putchar(begin);
	while (lengthx > 2)
	{
		ft_putchar(mid);
		lengthx--;
	}
	if (lengthx == 2)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	lengthy;

	lengthy = y;
	if (x <= 0 || y <= 0)
	{
		write(1, "[!] - Please use x and y values above 0.\n", 41);
		return ;
	}
	while (lengthy >= 1)
	{
		if (lengthy == y)
		{
			writel('o', '-', 'o', x);
		}
		else if (lengthy < y && lengthy != 1)
		{
			writel('|', ' ', '|', x);
		}
		else
		{
			writel('o', '-', 'o', x);
		}
		lengthy--;
	}
}

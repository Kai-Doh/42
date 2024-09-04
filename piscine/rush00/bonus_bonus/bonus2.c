/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroussy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:16:48 by nroussy           #+#    #+#             */
/*   Updated: 2024/08/25 16:17:06 by nroussy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#define CORNER_UP_LEFT 'A'
#define CORNER_UP_RIGHT 'C'
#define CORNER_DOWN_LEFT 'C'
#define CORNER_DOWN_RIGHT 'A'
#define HOR_BORDER 'B'
#define VER_BORDER 'B'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	h;
	int	v;

	v = 1;
	h = 0;
	while ((h++ <= x) && (v <= y) && (x > 0) && (y > 0))
	{
		if (h == 1 && v == 1)
			ft_putchar(CORNER_UP_LEFT);
		if ((h > 1 && h < x && v == 1) || (h > 1 && h < x && v == y))
			ft_putchar(HOR_BORDER);
		if (h == x && v == 1)
			ft_putchar(CORNER_UP_RIGHT);
		if ((h == 1 && v > 1 && v < y) || (h == x && v > 1 && v < y))
			ft_putchar(VER_BORDER);
		if ((h > 1 && h < x) && (v > 1 && v < y))
			ft_putchar(32);
		if (h == 1 && v == y)
			ft_putchar(CORNER_DOWN_LEFT);
		if (h == x && v == y)
			ft_putchar(CORNER_DOWN_RIGHT);
		if (h == x)
			ft_putchar('\n');
		h = ((h != x) * h) + (0 * (v += (h == x)));
	}
}

int	main(void)
{
	int	x;
	int	y;

	x = 117;
	y = 42;
	rush(x, y);
	return (0);
}

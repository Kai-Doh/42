/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_available.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:45:51 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/31 13:46:13 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_available(int x, int y, int **test)
{
	while (y < 8)
	{
		while (x < 9)
		{
			if (test[y][x] >= 1 && test[y][x] <= 9)
				return (0);
			else
				return (1);
		}
	}
}
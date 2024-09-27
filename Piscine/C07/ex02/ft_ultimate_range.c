/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 00:21:58 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/09 16:40:51 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = (void *) 0;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (size);
}

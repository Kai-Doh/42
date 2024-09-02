/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 00:21:45 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/03 00:22:41 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    *ft_range(int min, int max)
{
    int	*range;
    int	i;

    if (min >= max)
        return (0);
    range = (int *)malloc(sizeof(int) * (max - min));
    if (range == 0)
        return (0);
    i = 0;
    while (min < max)
    {
        range[i] = min;
        min++;
        i++;
    }
    return (range);
}
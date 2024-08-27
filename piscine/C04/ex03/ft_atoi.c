/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:30:16 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/27 16:12:05 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	valeur;

	i = 0;
	valeur = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-'
		|| (str[i] >= 9 && str[i] <= 13))
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		valeur = (10 * valeur) + (str[i] - 48);
		i++;
	}
	valeur = valeur * neg;
	return (valeur);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:58:13 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/23 12:01:04 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] >= 97 && str[x] <= 122)
	{
		x++;
	}
	if (str[x] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

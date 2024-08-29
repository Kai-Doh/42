/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:11:14 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/28 09:18:13 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + s] == to_find[s])
		{
			s++;
			if (to_find[s] == '\0')
				return (&str[i]);
		}
		i++;
		s = 0;
	}
	return (0);
}

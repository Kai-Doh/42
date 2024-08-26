/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:51:08 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/26 11:40:04 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*tmp;

	tmp = str;
	if (*to_find == '\0')
		return (str);
	while (*tmp)
	{
		i = 0;
		if (*tmp == to_find[0])
		{
			while (tmp[i] == to_find[i] && to_find[i] != '\0')
				i++;
			if (to_find[i] == '\0')
				return (tmp);
		}
		tmp++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:11:14 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/29 11:04:52 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
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
/*
int	main(void)
{
	char	str[15];
	char	to_find[4];

	strcpy(str, "skenddofdegdog");
	strcpy(to_find, "dog");
	printf("%s", ft_strstr(str, to_find));
}
*/

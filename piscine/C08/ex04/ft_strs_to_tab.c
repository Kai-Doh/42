/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:13:36 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/08 10:10:14 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *cpy, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	ft_strs_to_tab(int argc, char **argv)
{
	int			i;
	t_stock_str	result;

	result = malloc((argc + 1) * sizeof(t_stock_str));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		result[i].size = ft_strlen(argv[i]);
		result[i].str = argv[i];
		result[i].copy = malloc(sizeof(char) * ft_strlen(argv[i]));
		if (result[i].copy == NULL)
			return (NULL);
		result[i].copy = ft_strcpy(result[i].copy, argv[i]);
		i++;
	}
	result[i].size = 0;
	result[i].str = 0;
	result[i].copy = 0;
	return (result);
}

#include <stdio.h>

int	main(int argc,char **argv)
{
	struct s_stock_str	tab;

	tab = ft_strs_to_tab(argc, argv);
	printf("the size of this is: %d\n the string is: %s\n and the copy of the string is: %s\n",
	 tab[0].size, tab[0].str, tab[0].copy);
	return (0);
}

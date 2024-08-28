/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:56:44 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/23 11:55:58 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] == s2[index] && (s1[index] || s2[index]))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
/*
int	main(void)
{
	char	*s1 = "Hello World";
	char 	*s2 = "Hello world";

	ft_strcmp(s1, s2);
	printf("%d",ft_strcmp(s1, s2));
}
*/

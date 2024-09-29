/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:45:42 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/29 02:37:59 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c = '.';
	if (ft_isalpha(c) == 1)
		printf("it's an alpha.\n");
	else
	{
		printf("it's not an alpha.\n");
	}

	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:55:40 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/29 02:38:34 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c = '5';

	if (ft_isdigit(c) == 1)
		printf("c is a digit.\n");
	else
		printf("c is not a digit.\n");
	return (0);
}
*/

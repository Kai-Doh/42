/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 02:09:40 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/29 02:39:00 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c = 123;

	if (ft_isprint(c) == 1)
		printf("c is printable\n");
	else
		printf("c is not printable\n");
	return (0);
}
*/

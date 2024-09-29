/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 02:04:32 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/29 02:38:18 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int c = 127;
	if (ft_isascii(c) == 1)
		printf("is ascii\n");
	else
		printf("is not ascii\n");
	return (0);
}
*/

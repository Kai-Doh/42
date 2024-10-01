/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:44:04 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/01 14:43:20 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	dest = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, s1len + 1);
	ft_strlcat(dest, s2, s1len + s2len + 1);
	return (dest);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*str;

	s1 = "";
	s2 = "42";
	str = ft_strjoin(s1, s2);
	printf("%s", str);
}
*/

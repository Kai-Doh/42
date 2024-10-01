/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:49:38 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/01 13:58:20 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	strlen;
	size_t	end;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	end = 0;
	if (start < strlen)
		end = strlen - start;
	if (end > len)
		end = len;
	substr = malloc(sizeof(char) * end + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, end + 1);
	return (substr);
}
/*
int	main(void)
{
	char	*str;
	char	*substr;
	unsigned int	start = 2;
	size_t	len = 5;

	str = "Hello World!";
	substr = ft_substr(str, start, len);
	printf("%s", substr);
}
*/

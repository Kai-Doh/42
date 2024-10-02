/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:05:04 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/02 11:32:37 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	length;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	result = malloc(sizeof(char) * length + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*str;
    char	*result;

    str = "Hello";
    result = ft_strmapi(str, ft_toupper);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return (0);
}
*/

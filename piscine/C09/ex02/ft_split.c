/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:53:39 by ktiomico          #+#    #+#             */
/*   Updated: 2024/09/10 23:42:52 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str, char *charset);
void	write_split(char **split, char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	if (str == NULL || charset == NULL)
        return (NULL);
	words = count_words(str, charset);
	res = (char**)malloc(sizeof(char*) * (words + 1));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	write_split(res, str, charset);
	return (res);
}

int		char_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int		count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_sep(str[i + 1], charset) == 1
				&& char_sep(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	dup_word(char *dest, char *beg, char *charset)
{
	int	i;

	i = 0;
	while (char_sep(beg[i], charset) == 0)
	{
		dest[i] = beg[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_sep(str[i + j], charset) == 0)
				j++;
			split[word] = (char*)malloc(sizeof(char) * (j + 1));
			dup_word(split[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

#include <stdio.h>

int main(void)
{
    char **res;
    int i;

    i = 0;
    res = ft_split("He-llo, Wo-rld, Ho-w    Are,You", ", -");
    if (res == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    while (res[i] != NULL)
    {
        printf("%s\n", res[i]);
        i++;
    }

    return 0;
}

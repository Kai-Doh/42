/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:45:39 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/01 23:21:59 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_tab(char **tab, size_t j)
{
	while (j--)
		free(tab[j]);
	free(tab);
}

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_allocate_word(const char *s, char c, size_t *index)
{
	size_t	start;
	size_t	len;
	char	*word;

	while (s[*index] && s[*index] == c)
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	len = *index - start;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	return (word);
}

static int	ft_fill_tab(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_allocate_word(s, c, &i);
			if (!tab[j++])
				return (ft_free_tab(tab, j), 0);
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_wordcount(s, c);
	tab = malloc((word_count + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	if (!ft_fill_tab(tab, s, c))
		return (NULL);
	return (tab);
}
/*
int	main(void)
{
	char	**tab;
	char	*str = "Hello World!";
	char	c = ' ';

	tab = ft_split(str, c);
	while (*tab)
		printf("%s\n", *tab++);
}
*/

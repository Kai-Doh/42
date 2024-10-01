/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:45:39 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/01 16:05:59 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// Helper function to calculate the length of a string
int ft_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Helper function to count the number of words separated by the delimiter
int count_words(const char *str, char delimiter) {
    int count = 0;
    int i = 0;
    int in_word = 0;

    while (str[i] != '\0') {
        if (str[i] == delimiter) {
            if (in_word) {
                in_word = 0;
            }
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        i++;
    }
    return count;
}

// Helper function to allocate and copy a substring
char *ft_substr(const char *str, int start, int length) {
    char *substr = (char *)malloc((length + 1) * sizeof(char));
    int i = 0;

    if (!substr)
        return NULL;

    while (i < length) {
        substr[i] = str[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}

// Main split function
char **ft_split(const char *str, char delimiter) {
    int i = 0;
    int j = 0;
    int k = 0;
    int start = 0;
    int word_count = count_words(str, delimiter);
    char **result = (char **)malloc((word_count + 1) * sizeof(char *));

    if (!result)
        return NULL;

    while (str[i] != '\0') {
        if (str[i] == delimiter) {
            if (i > start) {
                result[k++] = ft_substr(str, start, i - start);
            }
            start = i + 1;
        }
        i++;
    }

    if (i > start) {
        result[k++] = ft_substr(str, start, i - start);
    }

    result[k] = NULL;
    return result;
}

int main(void) {
	char *str = "Hello,world,!";
	char **tokens = ft_split(str, ',');
	int i = 0;
	while (tokens[i] != NULL) {
		printf("%s\n", tokens[i]);
		i++;
	}
	return 0;
}

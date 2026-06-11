/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:43:24 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 16:44:38 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **lst, int i)
{
	while (i > 0)
	{
		i--;
		free(lst[i]);
	}
	free(lst);
	return (NULL);
}

static size_t	count_words(const char *s, char c)
{
	size_t	words;
	int		i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char	**get_words(char const *s, char c, char **lst)
{
	int		i;
	size_t	wordlen;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			wordlen = 0;
			while (s[wordlen] && s[wordlen] != c)
				wordlen++;
			lst[i++] = ft_substr(s, 0, wordlen);
			if (!lst[i - 1])
				return (free_all(lst, i - 1));
			s += wordlen;
		}
	}
	lst[i] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	if (!s)
		return (NULL);
	lst = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	return (get_words(s, c, lst));
}

/*
int main(void)
{
    char **tab;
    int i = 0;

    tab = ft_split("  O Fresneda e fixe  ", ' ');
    if (!tab) 
		return (1);
    while (tab[i])
    {
        printf("Palavra [%d]: %s\n", i, tab[i]);
        free(tab[i]); // Importante libertar cada palavra
        i++;
    }
    free(tab); // E libertar o array
    return (0);
}
*/
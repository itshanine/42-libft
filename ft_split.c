/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:28:06 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/02 01:04:54 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - La chaîne de caractères à découper.
                c - Le caractère délimiteur.
   Description: Alloue (avec malloc(3)) et retourne un tableau de chaînes 
   de caractères obtenu en séparant ’s’ à l’aide du caractère ’c’, utilisé 
   comme délimiteur. Le tableau doit être terminé par NULL. */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*word_cpy(const char *s, int start, int finish)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**final_string(char	const *s, char c, char **string)
{
	size_t	i;
	size_t	j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen (s)) && index >= 0)
		{
			string[j++] = word_cpy(s, index, i);
			index = -1;
		}
		i++;
	}
	string[j] = NULL;
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (0);
	strs = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	strs = final_string(s, c, strs);
	return (strs);
}

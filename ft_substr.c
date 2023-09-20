/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:35:55 by hanjebou          #+#    #+#             */
/*   Updated: 2023/09/20 18:19:41 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - La chaîne de laquelle extraire la nouvelle chaîne.
                start - L’index de début de la nouvelle chaîne 
				dans la chaîne ’s’.
                len - La taille maximale de la nouvelle chaîne. 
   Description: Alloue (avec malloc(3)) et retourne une chaîne de caractères 
   issue de la chaîne ’s’.Cette nouvelle chaîne commence à l’index ’start’ et 
   a pour taille maximale ’len’. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;

	if (!s || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			s1[j] = s[i];
			j++;
		}
		i++;
	}
	s1[j] = '\0';
	return (s1);
}

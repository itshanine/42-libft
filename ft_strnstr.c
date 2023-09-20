/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:14:12 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/30 16:17:15 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: big - La chaîne de caractères dans laquelle rechercher.
               little - La chaîne de caractères à trouver.
               len - Le nombre maximal de caractères à examiner. 
   Description: Recherche la première occurrence de la chaîne de caractères 
   'little' dans 'big', jusqu'aux 'len' premiers caractères.
   Renvoie un pointeur vers le début de la sous-chaîne trouvée ou 
   NULL s'il n'est pas présent. */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_len;
	char	*b;

	i = 0;
	b = (char *)big;
	l_len = ft_strlen(little);
	if (!big && len == 0)
		return (0);
	if (l_len == 0 || big == little)
		return (b);
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (b[i + j] && little[j] && b[i + j] == little[j] && i + j < len)
			j++;
		if (j == l_len)
			return (b + i);
		i++;
	}
	return (0);
}

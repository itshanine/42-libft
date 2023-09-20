/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:45:24 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:22:22 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s1 - La première chaîne de caractères à comparer.
               s2 - La deuxième chaîne de caractères à comparer.
               size - Le nombre maximal de caractères à comparer. 
   Description: Compare les 'size' premiers caractères de 's1' et 's2'.
   Renvoie un entier négatif si 's1' est inférieur à 's2', un entier positif si 
   's1' est supérieur à 's2', et 0 s'ils sont égaux. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < size)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

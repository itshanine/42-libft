/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:21:46 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:16:01 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: ptr1 - Le premier bloc de mémoire à comparer.
               ptr2 - Le deuxième bloc de mémoire à comparer.
               size - Le nombre d'octets à comparer.
   Description: Compare les 'size' premiers octets de 'ptr1' et 'ptr2'.
   Renvoie un entier négatif si 'ptr1' est inférieur à 'ptr2', un entier 
   positif si 'ptr1' est supérieur à 'ptr2', et 0 s'ils sont égaux. */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	size_t				i;
	unsigned const char	*s1;
	unsigned const char	*s2;

	i = 0;
	s1 = (unsigned const char *)ptr1;
	s2 = (unsigned const char *)ptr2;
	while (size)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		size--;
	}
	return (0);
}

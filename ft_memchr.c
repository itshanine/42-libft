/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:42:20 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:14:43 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - La mémoire à chercher.
               c - Le caractère à rechercher.
               size - Le nombre d'octets à vérifier. 
   Description: Recherche la première occurrence du caractère 'c' dans les 
   'size' premiers octets de la mémoire 's'. Renvoie un pointeur vers l'octet 
   trouvé ou NULL s'il n'est pas présent. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t		i;
	const char	*ptr;

	i = 0;
	ptr = (const char *)s;
	while (i < size)
	{
		if (ptr[i] == (const char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}

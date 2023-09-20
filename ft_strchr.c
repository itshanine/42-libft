/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 08:57:19 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/30 02:10:04 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - La chaîne de caractères à chercher.
               c - Le caractère à rechercher. 
   Description: Recherche la première occurrence du caractère 'c' dans la 
   chaîne de caractères 's'. Renvoie un pointeur vers le caractère trouvé ou 
   NULL s'il n'est pas présent. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] != (unsigned char)c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)(str + i));
}

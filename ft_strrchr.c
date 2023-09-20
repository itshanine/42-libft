/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:06:15 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/30 02:11:05 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - La chaîne de caractères à chercher.
               c - Le caractère à rechercher. 
   Description: Recherche la dernière occurrence du caractère 'c' dans la 
   chaîne de caractères 's'. Renvoie un pointeur vers le caractère trouvé ou 
   NULL s'il n'est pas présent. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			ptr = (char *)(s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		ptr = (char *)(s + i);
	return (ptr);
}

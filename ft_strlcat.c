/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:54:30 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:20:40 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: dest - Le pointeur vers la destination de la concaténation.
               src - Le pointeur vers la source de la concaténation.
               dstsize - La taille maximale de la destination. 
   Description: Concatène la chaîne de caractères 'src' (incluant le caractère 
   nul '\0') à la fin de 'dest'. Assure que 'dest' se termine par '\0'.
   Renvoie la longueur totale de la chaîne résultante (initial + ajout). */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dest))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src + j));
}

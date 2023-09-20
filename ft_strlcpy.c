/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:02:00 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/30 16:05:22 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: dest - Le pointeur vers la destination de la copie.
               src - Le pointeur vers la source de la copie.
               size - La taille maximale de la destination. 
   Description: Copie au plus 'size - 1' caractères de la chaîne de caractères
   'src' (incluant le caractère nul) dans 'dest'. Assure que 'dest' se
    termine par '\0'. Renvoie la longueur totale de 'src'. */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s_len);
}

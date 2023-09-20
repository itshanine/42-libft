/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:38:33 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:18:34 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: src - La chaîne de caractères à dupliquer. 
   Description: Duplique la chaîne de caractères 's' en allouant suffisamment 
   de mémoire pour la copie. Renvoie un pointeur vers la nouvelle chaîne de 
   caractères dupliquée, ou NULL en cas d'échec d'allocation. */

#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	i;
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

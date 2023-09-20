/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:49:50 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:17:59 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: ptr - Le pointeur vers la mémoire à remplir.
               c - La valeur du caractère à copier (convertie en unsigned char).
               count - Le nombre d'octets à remplir. 
   Description: Remplit les 'count' premiers octets de la mémoire pointée par 
   'ptr' avec la valeur du caractère 'c'. Renvoie un pointeur vers 'ptr'. */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t count)
{
	char	*zone;

	zone = ptr;
	while (count)
	{
		*zone = c;
		zone++;
		count--;
	}
	return (ptr);
}

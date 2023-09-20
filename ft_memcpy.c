/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:19:06 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:16:30 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: dst - Le pointeur vers la destination de la copie.
               src - Le pointeur vers la source de la copie.
               size - Le nombre d'octets à copier. 
   Description: Copie les 'size' premiers octets de la mémoire pointée par 'src' 
   dans la mémoire pointée par 'dst'. Les deux zones de mémoire ne doivent pas 
   se chevaucher. Renvoie un pointeur vers 'dst'. */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dst;
	s = (const char *)src;
	if (!dst && !src)
		return (0);
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

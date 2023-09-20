/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:16:03 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/14 11:45:04 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: nmemb - Le nombre d'éléments à allouer.
               size - La taille en octets de chaque élément. 
   Description: Alloue un bloc de mémoire contenant 'nmemb' éléments 
   de taille 'size' octets chacun, et initialise toutes les positions à zéro.
   Renvoie un pointeur vers le bloc de mémoire alloué, ou NULL si échec.*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		over;

	over = (int)(nmemb * size);
	if (size)
	{
		if (nmemb != ((size_t)over / size))
			return (NULL);
	}
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

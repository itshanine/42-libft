/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:05:51 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:23:30 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - Le pointeur vers la mémoire à remplir de zéros.
               count - Le nombre d'octets à remplir de zéros.
   Description: Remplit les 'count' premiers octets de la mémoire pointée par 
   's' avec des zéros. */

#include "libft.h"

void	ft_bzero(void *s, size_t count)
{
	char	*i;

	i = s;
	while (count)
	{
		*i = 0;
		i++;
		count--;
	}
}

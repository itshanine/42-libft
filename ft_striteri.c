/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:13:31 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/30 17:24:05 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - La chaîne de caractères sur laquelle itérer.
               f - La fonction à appliquer à chaque caractère. 
   Description: Applique la fonction ’f’ à chaque caractère de la chaîne de 
   caractères transmise comme argument, et en passant son index comme 
   premier argument. Chaque caractère est transmis par adresse à ’f’ afin 
   d’être modifié si nécessaire. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

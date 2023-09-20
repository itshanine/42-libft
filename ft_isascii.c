/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:10:52 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/30 01:56:09 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: c - Le caractère à vérifier. 
   Description: Vérifie si le caractère donné est un caractère ASCII valide 
   (dans la plage de 0 à 127 inclus). Renvoie une valeur non nulle s'il est 
   ASCII, 0 sinon. */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:49:45 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/30 01:55:13 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: c - Le caractère à vérifier. 
 Description: Vérifie si le caractère donné est un caractère alphanumérique 
 (lettre alphabétique ou chiffre). Renvoie une valeur non nulle s'il est 
 alphanumérique, 0 sinon. */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:33:08 by hanjebou          #+#    #+#             */
/*   Updated: 2023/08/16 12:54:27 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: str - La chaîne de caractères à convertir en entier. 
   Description: Convertit la chaîne de caractères 'str' en un entier signé.
   Ignorera les espaces blancs initiaux. Renvoie la valeur de l'entier. */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

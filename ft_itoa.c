/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:20:39 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/29 21:34:28 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: n - L’entier à convertir. 
   Description: Alloue (avec malloc(3)) et retourne une chaîne de caractères 
   représentant l’entier ’n’ reçu en argument. Les nombres négatifs doivent 
   être gérés. */

#include "libft.h"

static int	n_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		n++;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	int				len;

	len = n_len(n);
	if (n < 0)
		nb = n * -1;
	else
		nb = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str != NULL)
	{
		str[len--] = '\0';
		if (n < 0)
			str[0] = '-';
		else if (n == 0)
			str[0] = '0';
		while (nb > 0)
		{
			str[len--] = nb % 10 + '0';
			nb /= 10;
		}
	}
	return (str);
}

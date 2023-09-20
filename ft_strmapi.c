/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:51:22 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/29 21:35:34 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - La chaîne de caractères sur laquelle itérer.
                f - La fonction à appliquer à chaque caractère.
   Description: Applique la fonction ’f’ à chaque caractère de la chaîne 
   de caractères passée en argument pour créer une nouvelle chaîne de 
   caractères (avec malloc(3)) résultant des applications successives de ’f’.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	s2 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

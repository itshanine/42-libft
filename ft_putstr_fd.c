/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:28:42 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/29 21:38:13 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: s - La chaîne de caractères à écrire.
               fd - Le descripteur de fichier sur lequel écrire. 
   Description: Écrit la chaîne de caractères ’s’ sur le descripteur de fichier 
   donné.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

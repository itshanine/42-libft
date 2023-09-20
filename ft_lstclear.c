/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:09:18 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/29 21:23:10 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: lst - L'adresse du pointeur vers un élément.
               del - L'adresse de la fonction permettant de supprimer 
			   le contenu d'un élément.
   Description: Supprime et libère la mémoire de l'élément passé en paramètre, 
   et de tous les éléments qui suivent, à l'aide de 'del' et de free(3). 
   Enfin, le pointeur initial doit être mis à NULL. */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = temp;
		}
	}
}

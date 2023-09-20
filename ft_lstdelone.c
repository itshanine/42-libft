/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:06:16 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/30 17:20:48 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: lst - L'élément à free.
               del - L'adresse de la fonction permettant de supprimer 
			   le contenu de l'élément. 
   Description: Libère la mémoire de l'élément passé en argument en utilisant 
   la fonction 'del' puis avec free(3). 
   La mémoire de 'next' ne doit pas être free. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:02:52 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/29 21:25:42 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: lst - L'adresse du pointeur vers un élément.
               f - L'adresse de la fonction à appliquer.
               del - L'adresse de la fonction permettant de supprimer 
			   le contenu d'un élément. 
   Description: Itère sur la liste 'lst' et applique la fonction 'f' 
   au contenu de chaque élément. Crée une nouvelle liste résultant des 
   applications successives de 'f'. La fonction 'del' est là pour détruire le
   contenu d'un élément si nécessaire. */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_list;

	new_list = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

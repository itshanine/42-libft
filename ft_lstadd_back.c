/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:32:36 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/29 21:18:55 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres: lst - L'adresse du pointeur vers le premier élément de la liste.
               new - L'adresse du pointeur vers l'élément à rajouter à la liste. 
   Description: Ajoute l'élément 'new' à la fin de la liste. */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last_element = ft_lstlast(*lst);
			last_element->next = new;
		}
	}
}

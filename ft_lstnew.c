/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:08:12 by hanjebou          #+#    #+#             */
/*   Updated: 2023/07/29 21:13:51 by hanjebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Paramètres:  content: Le contenu du nouvel élément. 
   Description: Alloue (avec malloc(3)) et renvoie un nouvel élément. 
   La variable membre 'content' est initialisée à l'aide de la valeur
   du paramètre 'content'. La variable 'next' est initialisée à NULL. */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

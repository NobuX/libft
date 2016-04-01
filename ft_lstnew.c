/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 16:23:41 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/01 16:20:58 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue et return un maillon frai, les champs content et content size sont
** initialisés par copie des peramètres de la fonction.
** Si le paramètre content est NULL, le champ content et le champ content size
** sont initialisés a NULL et 0 quelque soit la valeur du param content size.
** le champ next est initialisé a NULL, si l'alloc échoue, return NULL.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = NULL;
	if (!(list = (t_list*)malloc(sizeof(*list))))
		return (NULL);
	if (!(content))
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		list->content = ft_memdup(content, content_size);
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}

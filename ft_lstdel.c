/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 14:19:19 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/01 16:15:12 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prends en parametre l'adresse d'un maillon, libère sa memoire, et celle
** de tous ses successeurs l'un apres l'autre avec del et free.
** Pour terminer, le pointeur sur le dernier maillon doit etrer mis a NULL.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while (*alst)
	{
		tmp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		ft_memdel((void**)alst);
		*alst = tmp;
	}
	free(tmp);
}

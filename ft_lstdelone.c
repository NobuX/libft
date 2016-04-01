/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 13:53:50 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/01 14:19:02 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction libère la mémoire du contenu du maillon pris en parametre puis
** free le maillon. Le champ next ne doit pas etre libéré.
** Le pointeur sur le maillon doit etre mis à NULL.
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void**)alst);
}

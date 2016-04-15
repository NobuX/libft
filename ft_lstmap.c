/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 15:35:47 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 21:41:20 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue et return une list chainnée résultant des applications successives
** de la fonction f sur chaque maillon de lst.
** Si une allocation échoue, renvoi NULL.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	if (!lst->next)
		return (f(lst));
	new = ft_lstmap(lst->next, f);
	ft_lstadd(&new, f(lst));
	return (new);
}

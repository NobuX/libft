/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 15:20:54 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/01 16:16:15 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parcour la liste en appliquant a chaque maillon la fonction f.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}

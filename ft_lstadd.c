/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 15:14:33 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/01 15:19:21 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ajoute l'element en tete de la list.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

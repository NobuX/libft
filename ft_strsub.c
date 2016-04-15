/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 14:50:20 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 22:57:58 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue avec malloc et renvoi une copie fraiche du troncon passé en parametre.
** Le troncon commence a l'index start et a pour longueur len.
** Si le troncon n'est pas une chaine valide, le comportement est indeterminé.
** Renvoi NULL si l'allocation échoue.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s || !(sub = ft_strnew(len)))
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(sub, s, len);
	sub[len] = '\0';
	return (sub);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 14:50:20 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/08 16:21:56 by pcarre           ###   ########.fr       */
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
	size_t	i;

	if (!s)
		return (NULL);
	i = -1;
	if ((sub = ft_strnew(len)))
	{
		while (++i < len)
			sub[i] = s[start + i];
		return (sub);
	}
	return (NULL);
}

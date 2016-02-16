/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 16:50:07 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/16 18:08:17 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie au plus n carracteres de la src vers la dst en s'arrettant si
** le caractere c est rencontre.
** Renvoie un pointeur sur le caractere immediatement apres c dans dest,
** ou NULL si c n'as pas ete trouve dans les n premiers caracteres.
*/

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,\
		size_t n)
{
	size_t		i;

	i = -1;
	while (i < n && src[i] != '\0')
	{
		dst[++i] = src[++i];
		if (src[i] == c)
			return (dst[++i]);
	}
	return (NULL);
}

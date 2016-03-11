/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 18:04:46 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/11 18:40:16 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatène src a la suite de dst. fonction sensée etre moin génératrice
** d'erreures que ft_strncat, car elle prends en compte la taille du buffer,
** et non seulement la longueure de la chaine. Elle garanti le '\0' tant
** qu'il y a un byte free dans dst. (ce byte peut etre inclu dans size).
** dst et src doivent etre terminees par '\0'.
** Return la taille totale de la chaine crée.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t dst_end;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	dst_end = i;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	if (i < size)
		dst[i] = '\0';
	return (dst_end + ft_strlen(src));
}

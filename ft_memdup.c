/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 16:33:05 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/01 16:22:06 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue un espace suffisant pour copier src, fait la copie.
** Return un pointeur sur la copie ou NULL si malloc échoue.
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_memdup(void const *src, size_t size)
{
	void	*dst;

	dst = NULL;
	if (!(dst = (void *)malloc(sizeof(*src) * size)))
	{
		return (NULL);
	}
	ft_memcpy(dst, src, size);
	return (dst);
}

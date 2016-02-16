/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 16:39:24 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/16 18:16:16 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie n octets depuis src dans dst.
** Return pointeur sur dst.
*/

#include <string.h>

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	while (n-- >= 0)
		dst[n] = src[n];
	return (dst);
}

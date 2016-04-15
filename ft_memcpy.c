/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 16:39:24 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 18:40:03 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie n octets depuis src dans dst.
** Return pointeur sur dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	tmp_d = (unsigned char *)dst;
	tmp_s = (unsigned char *)src;
	while (n--)
		*tmp_d++ = *tmp_s++;
	return (dst);
}

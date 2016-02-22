/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 17:02:07 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:22:15 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie n octets de src vers dst, la copie se passe comme si les octets etaient
** copies dans une zone temporaire avant d'etre copies dans dst.
** Return un pointeur sur dst.
*/

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	void	tmp[len];
	size_t	i;

	i = len;
	while (len-- > 0)
		tmp[len] = src[len];
	while (len++ < i)
		dst[len] = tmp[len];
	return (dst);
}

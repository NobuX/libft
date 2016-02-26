/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 16:50:07 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/26 17:52:35 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy bytes from string src to string dst.
** If the (unsigned char*)c occurs in string src, the copy stop and a pointer
** to the byte after the copy of c in the string dst is returned.
** Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,\
		size_t n)
{
	unsigned char	*dcp;
	unsigned char	*scp;
	size_t		i;

	i = -1;
	dcp = (unsigned char*)dst;
	scp = (unsigned char*)src;
	while (++i < n && scp[i])
	{
		dcp[i] = scp[i];
		if (scp[i] == (unsigned char)c)
			return (dst + i + 1);
	}
	return (NULL);
}

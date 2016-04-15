/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 16:50:07 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 18:41:15 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy bytes from string src to string dst.
** If the (unsigned char*)c occurs in string src, the copy stop and a pointer
** to the byte after the copy of c in the string dst is returned.
** Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dcp;
	unsigned char	*scp;
	size_t			i;

	i = 0;
	dcp = (unsigned char*)dst;
	scp = (unsigned char*)src;
	while (i < n)
	{
		dcp[i] = scp[i];
		if (dcp[i] == (unsigned char)c)
			return ((void *)&dcp[i + 1]);
		i++;
	}
	return (NULL);
}

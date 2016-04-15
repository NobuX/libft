/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 17:02:07 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 18:32:08 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memmove function cpies len bytes from string src to string dst.
** The 2 strings may overlap.
** The copy is always done in a non-destructive manner
** Return the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dcp;
	unsigned char	*scp;
	size_t			i;

	i = 0;
	dcp = (unsigned char*)dst;
	scp = (unsigned char*)src;
	if (dcp > scp)
		while (i < len)
		{
			dcp[len - 1] = scp[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			dcp[i] = scp[i];
			i++;
		}
	return (dst);
}

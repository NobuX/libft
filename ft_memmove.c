/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 17:02:07 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/26 17:30:26 by pcarre           ###   ########.fr       */
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
	unsigned char *dcp;
	unsigned char *scp;
	size_t	i;

	i = -1;
	dcp = (unsigned char*)dst;
	scp = (unsigned char*)src;
	while (scp[++i] && i < len)
		dcp[i] = scp[i];
	return (dst);
}

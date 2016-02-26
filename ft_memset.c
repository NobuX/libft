/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 16:22:12 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/26 16:30:29 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Rempli les n premiers octets de la cible pointee par b avec des caracteres c
** Renvoi un pointeur sur b.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len > 0)
		str[--len] = c;
	return (b);
}

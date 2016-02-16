/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 16:22:12 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/16 18:21:22 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Rempli les n premiers octets de la cible pointee par b avec des caracteres c
** Renvoi un pointeur sur c.
*/

#include <string.h>

void	*memset(void *b, int c, size_t len)
{
	while (len > 0)
		b[--len] = c;
	return (b);
}

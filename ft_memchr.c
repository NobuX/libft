/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 15:17:54 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:21:33 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Cherche la premiere occurence de c dans la string s
** Return un pointeur sur la cible ou NULL si non trouvé.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (unsigned char*)s;
	i = -1;
	while (++i < n)
		if (str[i] == (unsigned char)c)
			return ((void*)s + i);
	return (NULL);
}

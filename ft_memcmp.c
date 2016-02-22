/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 15:40:44 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:21:45 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare les n premiers éléments de deux chaines de caractères.
** Return 0 si elles sont identiques ou la difference entre la 1ere et la 2eme.
*/

#include "libft.h"

int		memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = -1;
	while (++i < n)
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 17:13:12 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/29 11:18:42 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue et retourne une chaine de caracteres fraiches terminée par '\0'
** resultant de la concaténation de s1 et s2.
** Si l'allocation échoue, return NULL
*/

#include "libft.h"
#include <stdlib.h>

static char		*ft_strcp(char *dst, const char *src)
{
	int		i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	return (dst);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2 || !(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	str = ft_strcp(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}

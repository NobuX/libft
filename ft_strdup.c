/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:44:49 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/10 15:46:07 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction alloue assez de mémoire pour une copie de s1, la fait et renvoi
** un pointeur sur elle.
** Si la mémoire est insuffisante, return NULL et errno est réglé sur ENOMEM.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		size;

	i = -1;
	size = ft_strlen(s1);
	if ((str = ft_strnew(size)))
	{
		while (str[++i])
			str[i] = s1[i];
		return (str);
	}
	return (NULL);
}

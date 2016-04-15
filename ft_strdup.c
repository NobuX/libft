/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:44:49 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 18:49:04 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction alloue assez de mémoire pour une copie de s1, la fait et renvoi
** un pointeur sur elle.
** Si la mémoire est insuffisante, return NULL et errno est réglé sur ENOMEM.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;

	if (!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	ft_strcpy(str, s);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 16:24:21 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/15 16:36:52 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return un pointeur sur la 1ere occurence de c dans s, ou NULL si c
** n'as pas été touvé.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			return ((char*)s + i);
	if (s[i] == (char)c)
		return ((char*)s + i);
	return (NULL);
}

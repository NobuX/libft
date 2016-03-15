/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:08:03 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/15 17:15:34 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Localise la 1ere occurence de s2 dans s1, avant le n ieme caractere.
** if s2 est une chaine vide: return s1.
** if s2 n'apparait pas dnas s1: return NULL.
** Si s2 apparait, return un pointeur sur le premier caractere de s2.
*/

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = -1;
	if (!(*s2))
		return ((char*)s1);
	while (s1[++i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s2[j] && s1[i + j] == s2[j] && i + j < n)
				j++;
			if (s2[j] == '\0')
				return ((char*)s1 + i);
		}
	}
	return (NULL);
}

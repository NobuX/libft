/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 14:12:57 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/08 16:21:04 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue avec malloc un tableau de chaines de carractères fraiches, toutes
** terminées par '\0', résultant de la découpe de s selon le caractere c.
** Si l'allocation échoue, return NULL.
*/


#include "libft.h"
#include <stdlib.h>

char	**ft_tabfill(char const *s, char c, char **tab)
{
	size_t	start;
	size_t	end;
	size_t	tab_s;
	size_t	i;

	tab_s = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end != start)
			tab[tab_s++] = ft_strsub(s, start, end - start);
	}
	tab[tab_s] = NULL;
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char **tab;

	if (!s)
		return (NULL);
	if ((tab = (char**)malloc(sizeof(*tab) * (ft_bitcount(s, c) + 1))))
		return (ft_tabfill(s, c, tab));
	return (NULL);
}

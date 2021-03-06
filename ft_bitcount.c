/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 15:29:14 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/15 15:57:57 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Retourne le nombre de bits splitted par le caractere c dans la chaine s.
*/

#include "libft.h"

size_t	ft_bitcount(char const *s, char c)
{
	int		is_b;
	size_t	bit;
	size_t	i;

	i = 0;
	bit = 0;
	is_b = 0;
	while (s[i])
	{
		if (s[i] == c && is_b)
			is_b = 0;
		if (s[i] != c && !is_b)
		{
			bit++;
			is_b = 1;
		}
		while (s[i] && s[i] == c && !is_b)
			i++;
		while (s[i] && s[i] != c && is_b)
			i++;
	}
	return (bit);
}

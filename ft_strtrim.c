/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 15:43:54 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/15 16:22:49 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue avec malloc et retourne la chaine de caracteres passée en parametre
** en retirant les espaces en début et fin de chaine.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	char		*str;

	j = 0;
	i = ft_strlen(s);
	while (s[i--] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		j++;
	i = 0;
	while (s[i++] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		j++;
	if ((str = ft_strnew(ft_strlen(s) - j)))
	{
		j = 0;
		while (str[j])
			str[j++] = s[i++];
		return (str);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 15:43:54 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 23:01:45 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue avec malloc et retourne la chaine de caracteres passée en parametre
** en retirant les espaces en début et fin de chaine.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	start = i;
	if (s[start] == '\0')
		return (ft_strdup(""));
	i = ft_strlen(s);
	while (s[--i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		;
	if (!(str = ft_strnew(i - start) + 1))
		return (NULL);
	str = ft_strsub(s, start, (i - start) + 1);
	return (str);
}

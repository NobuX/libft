/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 16:37:36 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/15 16:45:40 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return un pointeur sur la derniere occurence de c dans s, ou NULL si c
** n'as pas été trouvé.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (s[i] == (char)c)
		return ((char*)s + i);
	while (s[--i])
		if (s[i] == (char)c)
			return ((char*)s + i);
	return (NULL);
}

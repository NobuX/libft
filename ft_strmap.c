/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 18:13:28 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/10 18:31:23 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f a chaque caractere de la chainne de caracteres
** passée en paramètre pour créer une nouvelle chaine fraiche résultant
** des applications successives de f.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	i = -1;
	if ((str = ft_strnew(ft_strlen(s))))
	{
		while (s[++i])
			str[i] = f(s[i]);
		return (str);
	}
	return (NULL);
}

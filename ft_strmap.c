/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 18:13:28 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 20:26:59 by pcarre           ###   ########.fr       */
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
	if (!s || !f || !(str = ft_strdup(s)))
		return (NULL);
	while (str && str[++i])
		str[i] = f(str[i]);
	str[i] = '\0';
	return (str);
}

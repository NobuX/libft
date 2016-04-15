/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 16:04:36 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 18:34:50 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compte le nombre d'octet de la chainne passée en parametres.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (*s)
		while (s && s[i])
			i++;
	return (i);
}

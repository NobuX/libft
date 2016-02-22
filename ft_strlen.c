/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 16:04:36 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:23:57 by pcarre           ###   ########.fr       */
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
	while (s[i++])
		;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 15:51:06 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/23 15:58:06 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue avec malloc et return une chaine de caractères fraiche terminée par
** un '\0'. Chaque caractère de la chaine est initialité a '\0'.
** Si l'allocation échoue, return NULL.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}

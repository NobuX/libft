/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 16:29:14 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/23 15:21:04 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue et retourne une zone de mémoire "fraiche". la mémoire allouée est
** initialisée a 0. Si l'allocation échoue, renvoie NULL.
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = (void *)malloc(size)))
	{
		ft_bzero(mem, size);
		return (mem);
	}
	else
		ft_error_malloc("ft_memalloc");
	return (NULL);
}

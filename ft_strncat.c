/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 17:59:00 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/11 18:04:27 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie la chaine de caractere s2 a la fin de la chaine de caracteres s1
** et y ajoute le '\0'. La fonction ne copie pas plus de n caracteres de s2.
** s1 doit etre suffisament grande pour contenir s2.
** Retourne la chaine s1.
*/  

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] && n-- > 0)
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}

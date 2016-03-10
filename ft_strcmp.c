/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 18:42:46 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/10 19:05:42 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	s1_l;
	size_t	s2_l;
	size_t	n;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	n = (s1_l >= s2_l ? s1_l : s2_l);
	return (ft_memcmp((const void*)s1, (const void*)s2, n));
}

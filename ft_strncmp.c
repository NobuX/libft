/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 18:57:33 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/10 19:05:17 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s1_l;
	size_t	s2_l;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	if (s1_l < n && s2_l < n)
	{
		if (s1_l >= s2_l)
			n = s1_l;
		else
			n = s2_l;
	}
	return (ft_memcmp((const void*)s1, (const void*)s2, n));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 19:59:07 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 19:27:36 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (*src)
	{
		while (src[i] && i < n)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}

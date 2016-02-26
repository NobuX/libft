/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 19:59:07 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/26 16:23:04 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;

	i = -1;
	while (src[++i] && i < n)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

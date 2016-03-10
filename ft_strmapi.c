/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 18:32:50 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/10 19:14:57 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = -1;
	if ((str = ft_strnew(ft_strlen(s))))
	{
		while (s[++i])
			str[i] = f(i, s[i]);
		return (str);
	}
	return (NULL);
}

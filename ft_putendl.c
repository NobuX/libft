/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 14:40:43 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/23 14:44:30 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl(char const *s)
{
	if (!(s))
		ft_error_null("ft_putendl");
	else
	{
		write(1, s, ft_strlen(s));
		write(1, "\n", 1);
	}
}

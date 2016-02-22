/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:26:01 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:50:48 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** affiche une chainne de caracteres sur le fd en parametre suivi d'un \n.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (!(s))
		ft_error_null("ft_putendl_fd");
	else
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

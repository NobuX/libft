/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:16:25 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:54:48 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(chat const *s, int fd)
{
	if (!(s))
		ft_error_null("ft_putstr_fd");
	else
		write(fd, s, ft_strlen(s));
}

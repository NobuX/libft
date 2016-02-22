/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:13:27 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:16:10 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Affiche un carractere sur le fd passé en parametre.
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:13:27 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/10 15:52:20 by pcarre           ###   ########.fr       */
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

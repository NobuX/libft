/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:26:01 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/01 17:08:56 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** affiche une chainne de caracteres sur le fd en parametre suivi d'un \n.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

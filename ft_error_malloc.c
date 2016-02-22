/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_malloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:40:26 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:45:10 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Affiche les messages d'error en rapport avec malloc.
*/

#include "libft.h"

void	ft_error_malloc(char const *s)
{
	ft_putstr_fd("\033[41;1merror : ", 2);
	ft_putstr_fd(s, 2);
	ft_putendl_fd(" : memory allocation failled.\033[0m", 2);

}

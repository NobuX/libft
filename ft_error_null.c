/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:30:24 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 17:45:22 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Affiche les messages d'error concernant une abscence de données.
*/

#include "libft.h"

void	ft_error_null(char const *s)
{
	ft_putstr_fd("\033[41;1merror : ", 2);
	ft_putstr_fd(s, 2);
	ft_putendl_fd(" : null parameter.\033[0m", 2);
}

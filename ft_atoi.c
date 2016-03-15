/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 18:50:05 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/15 16:23:17 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converti la chaine de carractère en paramètre en int, contrairement a strtol,
** ne détecte pas les error.
** Renvoie la valeur convertie.
*/

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		res;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (ft_isspace((int)nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -1;
	while (ft_isdigit((int)nptr[i]))
		res = res * 10 + nptr[i++] - '0';
	return (res * sign);
}

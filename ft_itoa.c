/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 15:03:03 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/10 15:54:21 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue avec malloc et retourne une chaine de caractères fraiche terminée par
** un '\0' représentant l'entier n passé en paramètre.
** Les nombres négatifs doivent etre gérés.
** La fonction renvoi NULL si l'allocation échoue.
*/

#include "libft.h"

static int	ft_int_len(int n)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		tmp;
	char	*str;

	if (n == -2147483648)
		ft_strdup("-2147483648");
	len = ft_int_len(n);
	tmp = n;
	if ((str = ft_strnew(len)))
	{
		if (n < 0)
			tmp = -tmp;
		while (len--)
		{
			str[len] = tmp % 10 + '0';
			tmp = tmp / 10;
		}
		if (n < 0)
			str[0] = '-';
		return (str);
	}
	ft_error_malloc("ft_itoa");
	return (NULL);
}

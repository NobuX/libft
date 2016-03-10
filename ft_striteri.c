/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 17:51:21 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/10 19:13:45 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f() a chaque caractere de la chainne s en précisant
** son index en premier argument.
** Chaque caractere est passé par adresse a la fonction f pour etre modifié
** si nécéssaire.
*/

#include "stdlib.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}

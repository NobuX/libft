/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 17:51:21 by pcarre            #+#    #+#             */
/*   Updated: 2016/04/15 19:49:00 by pcarre           ###   ########.fr       */
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
	int		i;

	i = -1;
	if (!s || !f)
		return ;
	while (s && s[++i])
		f(i, &s[i]);
}

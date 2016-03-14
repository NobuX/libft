/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre <pcarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 18:09:03 by pcarre            #+#    #+#             */
/*   Updated: 2016/03/14 18:41:25 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}
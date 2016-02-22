/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 15:52:46 by pcarre            #+#    #+#             */
/*   Updated: 2016/02/22 16:03:19 by pcarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	*memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);



#endif

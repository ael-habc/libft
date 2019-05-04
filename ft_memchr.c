/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 23:44:43 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/21 19:57:19 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sx;
	unsigned char	x;

	i = 0;
	sx = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (sx[i] == x)
			return ((void *)&sx[i]);
		i++;
	}
	return (NULL);
}

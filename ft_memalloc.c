/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 04:36:55 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/04 06:37:36 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*m;

	m = NULL;
	if (size)
	{
		m = (unsigned char *)malloc(size);
		if (!m)
			return (NULL);
		ft_bzero(m, size);
	}
	return ((void *)m);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 03:23:41 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/20 23:26:34 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	j;
	size_t	res;

	d = 0;
	j = 0;
	res = 0;
	while (dst[d])
		d++;
	while (src[res])
		res++;
	(size <= d) ? (res += size) : (res += d);
	while (src[j] && d + 1 < size)
	{
		dst[d] = src[j];
		d++;
		j++;
	}
	dst[d] = '\0';
	return (res);
}

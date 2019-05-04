/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 04:49:31 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/08 15:18:32 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *m;

	m = (char *)malloc(sizeof(char) * size + 1);
	if (!m)
		return (NULL);
	ft_bzero(m, size + 1);
	return (m);
}

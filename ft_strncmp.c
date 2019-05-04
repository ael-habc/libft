/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 00:07:32 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/03 02:58:00 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			x;
	unsigned char	*sa;
	unsigned char	*sb;

	if (!n)
		return (0);
	sa = (unsigned char *)s1;
	sb = (unsigned char *)s2;
	i = 0;
	x = 1;
	while (sa[i] == sb[i] && sa[i] && x < n)
	{
		i++;
		x++;
	}
	return (sa[i] - sb[i]);
}

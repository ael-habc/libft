/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 23:36:59 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/21 01:09:38 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		pos;
	int		i;
	char	*h;
	char	*n;
	int		ln;

	ln = (int)len;
	n = (char *)needle;
	h = (char *)haystack;
	if (*n == '\0')
		return (h);
	pos = 0;
	i = 0;
	while (h[pos] && i < ln)
	{
		while (n[i] != '\0' && h[pos + i] == n[i] && (pos + i) < ln)
			i++;
		if (n[i] == '\0')
			return (&h[pos]);
		i = 0;
		pos++;
	}
	return (NULL);
}

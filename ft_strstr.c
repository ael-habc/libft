/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:55:53 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/04 21:42:49 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*h;
	char	*n;

	n = (char *)needle;
	h = (char *)haystack;
	i = 0;
	if (*n == '\0')
		return (h);
	while (h[i])
	{
		j = 0;
		while (n[j] && (h[i + j] == n[j]))
			j++;
		if (!n[j])
			return (&h[i]);
		i++;
	}
	return (0);
}

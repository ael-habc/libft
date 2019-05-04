/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 00:44:42 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/21 01:13:17 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		j;
	char	*res;

	if (!s)
		return (NULL);
	j = 0;
	res = (char *)malloc(sizeof(const char) * ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (s[j])
	{
		res[j] = f(s[j]);
		j++;
	}
	res[j] = '\0';
	return (res);
}

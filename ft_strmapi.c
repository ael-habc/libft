/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 01:01:00 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/21 01:14:24 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		res[j] = f(j, s[j]);
		j++;
	}
	res[j] = '\0';
	return (res);
}

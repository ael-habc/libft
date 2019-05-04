/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 22:47:19 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/23 01:57:56 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isspace(char c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*s1;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && ft_isspace(s[i]))
		i++;
	j = ft_strlen(s);
	while (ft_isspace(s[j - 1]))
		j--;
	if (!s[i])
	{
		if (!(s1 = (char *)malloc(sizeof(char))))
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
	return (ft_strsub(s, i, j - i));
}

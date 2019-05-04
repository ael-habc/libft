/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 23:51:20 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/23 00:44:53 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free(char **c)
{
	while (c)
	{
		ft_strdel(c);
		c++;
	}
}

static	size_t	wc(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
			word += 1;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	word;
	char	**fresh;

	i = 0;
	if (!(s && (fresh = (char **)malloc((wc(s, c) + 1) * sizeof(char *)))))
		return (NULL);
	word = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			if (!(fresh[word++] = ft_strsub(s, i, ft_wordlen(&s[i], c))))
			{
				ft_free(fresh);
				return (NULL);
			}
			while (s[i] != c && s[i])
				i++;
		}
	}
	fresh[word] = 0;
	return (fresh);
}

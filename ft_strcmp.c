/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 23:44:22 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/21 23:35:21 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*sa;
	unsigned char	*sb;

	sa = (unsigned char *)s1;
	sb = (unsigned char *)s2;
	i = 0;
	while (sa[i] == sb[i] && sa[i] && sb[i])
	{
		i++;
	}
	return (sa[i] - sb[i]);
}

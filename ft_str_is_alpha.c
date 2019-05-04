/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 19:51:47 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/18 19:58:05 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str_is_alpha(char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		if (!ft_isalpha(s[i]))
			return (0);
	return (1);
}

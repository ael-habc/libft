/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:00:10 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/22 16:30:50 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *frais;

	if (!(frais = (t_list *)malloc(sizeof(content) * content_size)))
		return (NULL);
	if (!content)
	{
		frais->content = NULL;
		frais->content_size = 0;
	}
	else
	{
		if (!(frais->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(frais->content, content, content_size);
		frais->content_size = content_size;
	}
	frais->next = NULL;
	return (frais);
}

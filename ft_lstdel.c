/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:59:04 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/22 18:37:54 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (!alst)
		return ;
	while (*alst)
	{
		list = *alst;
		del((*alst)->content, (*alst)->content_size);
		*alst = list->next;
		free(list);
	}
	*alst = NULL;
}

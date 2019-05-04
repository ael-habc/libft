/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:34:58 by ael-habc          #+#    #+#             */
/*   Updated: 2019/04/22 16:33:55 by ael-habc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*c;
	t_list	*s;

	if (!(lst && f))
		return (NULL);
	s = f(lst);
	c = s;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!c)
			return (NULL);
		c->next = f(lst);
		c = c->next;
		lst = lst->next;
	}
	return (s);
}

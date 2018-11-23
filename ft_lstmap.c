/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:24:37 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/23 13:54:23 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *new;
	t_list *start;
	t_list *lst2;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmp = lst;
	lst2 = lst;
	start = NULL;
	while (lst2)
	{
		tmp = f(lst2);
		if (!(new = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		if (start == NULL)
			start = new;
		else
			ft_lstendadd(start, new);
		lst2 = lst2->next;
	}
	return (start);
}

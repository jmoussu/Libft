/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:24:37 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/22 15:53:07 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *new;
	t_list *res;

	res = NULL;
	tmp = lst;
	while (tmp)
	{
		new = f(tmp);
		if (res == NULL)
			res = new;
		else
			ft_lstendadd(res, new);
		tmp = tmp->next;
	}
	return (res);
}

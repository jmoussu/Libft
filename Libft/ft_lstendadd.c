/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstendadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:57:46 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/22 17:37:53 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstendadd(t_list *alst, t_list *new)
{
	t_list *tmp;

	tmp = alst;
	if (!(alst))
		return ;
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (new)
	{
		tmp->next = new;
		new->next = NULL;
	}
}

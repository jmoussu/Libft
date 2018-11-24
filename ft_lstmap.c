/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:24:37 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/24 11:43:03 by jmoussu          ###   ########.fr       */
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

t_list	*ft_strcut1(t_list *lst)
{
	int		i;
	char	*str;

	str = lst->content;
	i = 0;
	while (str[i])
		i++;
	i--;
	str[i] = 0;
	return (lst);
}

int main (void)
{
	t_list *lstmap;
	t_list *lsta;
	t_list *lstb;
	t_list *lstc;
	t_list *lstd;
	t_list *(*f)(t_list*);
	f = &ft_strcut1;
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *strmap;
	str1 = "11111";
	str2 = "22222";
	str3 = "33333";
	str4 = "44444";
	strmap = "old and map";
	lsta = ft_lstnew(str1, ft_strlen(str1) + 1);
	lstb = ft_lstnew(str2, ft_strlen(str2) + 1);
	lstc = ft_lstnew(str3, ft_strlen(str3) + 1);
	lstd = ft_lstnew(str4, ft_strlen(str4) + 1);
	lstmap = ft_lstnew(strmap, ft_strlen(strmap) + 1);
	ft_lstendadd(lsta, lstb);
	ft_lstendadd(lsta, lstc);
	ft_lstendadd(lsta, lstd);
	ft_lstprintstr(lsta);
	ft_putchar('\n');
	ft_lstprintstr(lstmap);
	ft_putchar('\n');
	lstmap = ft_lstmap(lsta, f);
	ft_lstprintstr(lsta);
	ft_putchar('\n');
	ft_lstprintstr(lstmap);
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:19:28 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/15 13:58:27 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;
	int dif;

	dif = 0;
	i = 0;
	if (n == 0)
		return (1);
	n--;
	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while ((s1[i] || s2[i]) && n + 1 > 0)
	{
		if (s1[i] != s2[i])
			dif = 1;
		i++;
		n--;
	}
	return ((dif) ? 0 : 1);
}

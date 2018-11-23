/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:21:44 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/22 18:33:18 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int c;

	c = 1;
	if (nb < 0)
		return (0);
	while (c * c <= nb)
	{
		if (c * c == nb)
			return (c);
		c += 1;
	}
	return (0);
}

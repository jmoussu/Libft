/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:58:08 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/12 14:46:05 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	uc;
	int				find;

	find = 0;
	uc = (unsigned char)c;
	str = (unsigned char*)s;
	i = 0;
	while (i < n && find != 1)
	{
		if (*str == uc)
		{
			find = 1;
			str--;
		}
		str++;
		i++;
	}
	return ((find == 1) ? str : NULL);
}

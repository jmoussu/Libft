/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:14:37 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/10 19:20:42 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*strs;
	unsigned char	*strd;
	unsigned char	uc;
	int				find;

	find = 0;
	uc = (unsigned char)c;
	strd = (unsigned char*)dest;
	strs = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		if (*strs == uc)
		{
			i = n;
			find = 1;
		}
		*strd = *strs;
		i++;
		strs++;
		strd++;
	}
	return ((find == 1) ? strd : NULL);
}

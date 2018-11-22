/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:29:19 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/16 15:08:07 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if ((unsigned char*)src < (unsigned char*)dest)
	{
		n--;
		while (n + 1 > 0)
		{
			((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
			n--;
		}
	}
	if ((unsigned char*)src > (unsigned char*)dest)
	{
		while (i < n)
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	return (dest);
}

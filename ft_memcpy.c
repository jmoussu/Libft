/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:43:18 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/10 17:02:07 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*strs;
	char	*strd;

	strd = (char*)dest;
	strs = (char*)src;
	i = 0;
	while (i < n)
	{
		*strd = *strs;
		i++;
		strs++;
		strd++;
	}
	return (dest);
}

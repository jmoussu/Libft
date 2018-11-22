/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:39:36 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/13 20:53:08 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		t;

	t = ft_strlen(dest);
	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i + t] = src[i];
		i++;
	}
	dest[i + t] = 0;
	return (dest);
}

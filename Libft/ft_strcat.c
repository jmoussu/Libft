/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:50:59 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/12 15:46:39 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int t;

	t = ft_strlen(dest);
	i = 0;
	while (src[i] != 0)
	{
		dest[i + t] = src[i];
		i++;
	}
	dest[i + t] = 0;
	return (dest);
}

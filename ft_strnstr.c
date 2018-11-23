/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:04:19 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/13 20:54:24 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *f, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	if (f[i] == '\0')
		return ((char *)str);
	while (n && str[i] != 0)
	{
		while (str[i] == f[j] && (j < n))
		{
			if (f[j + 1] == '\0')
				return ((char *)str + i - j);
			i++;
			j++;
		}
		i = i - j;
		j = 0;
		i++;
		n--;
	}
	return (NULL);
}

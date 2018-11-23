/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:33:32 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/14 14:10:04 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *f)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (f[i] == '\0')
		return ((char *)str);
	while (str[i] != 0)
	{
		while (str[i] == f[j])
		{
			if (f[j + 1] == '\0')
				return ((char *)str + i - j);
			i++;
			j++;
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}

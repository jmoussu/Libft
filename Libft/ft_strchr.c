/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:50:15 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/13 19:07:55 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t			i;
	char			uc;
	char			*s;

	i = 0;
	uc = (char)c;
	s = (char *)str;
	while (str[i])
	{
		if (str[i] == uc)
			return (s + i);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (s + i);
	else
		return (NULL);
}

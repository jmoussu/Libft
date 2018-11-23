/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:29:17 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/13 20:55:44 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	j = ft_strlen(s1);
	i = 0;
	s2_len = 0;
	while (s2[i] && j + i + 1 < size)
	{
		s1[j + i] = s2[i];
		i++;
	}
	s1[i + j] = 0;
	s2_len = ft_strlen(s2);
	if (size < j)
		return (size + s2_len);
	return (j + s2_len);
}

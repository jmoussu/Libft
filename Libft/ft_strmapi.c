/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:39:06 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/15 10:48:39 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*sn;

	if (s == NULL)
		return (NULL);
	if (!(sn = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		sn[i] = f(i, s[i]);
		i++;
	}
	sn[i] = '\0';
	return (sn);
}

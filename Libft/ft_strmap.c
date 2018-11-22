/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:31:30 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/15 10:36:36 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		sn[i] = f(s[i]);
		i++;
	}
	sn[i] = '\0';
	return (sn);
}

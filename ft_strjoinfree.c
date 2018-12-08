/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:39:02 by jmoussu           #+#    #+#             */
/*   Updated: 2018/12/03 14:47:43 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2, int i)
{
	char	*str;

	if (!(str = ft_strjoin(s1, s2)))
		return (NULL);
	if (i >= 3)
	{
		free(s1);
		free(s2);
	}
	if (i == 1)
		free(s1);
	if (i == 2)
		free(s2);
	return (str);
}

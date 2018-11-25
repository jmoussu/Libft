/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:15:17 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/24 12:28:58 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrealloc(int len, char *str)
{
	char *newstr;

	if (!(newstr = (char *)malloc(sizeof(char) * (ft_strlen(str) + len + 1))))
		return (NULL);
	ft_bzero(newstr, ft_strlen(str) + len + 1);
	ft_strcpy(newstr, str);
	return (newstr);
}

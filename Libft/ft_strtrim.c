/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:30:18 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/19 15:01:40 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != 0)
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j >= 0)
		j--;
	str = ft_strsub(s, i, j + 1 - i);
	return (str);
}

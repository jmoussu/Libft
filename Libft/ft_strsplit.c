/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:21:38 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/19 15:33:06 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_mot(const char *str, char c)
{
	int i;
	int co;

	if (str == NULL)
		return (0);
	co = 0;
	i = 0;
	if (str[0] != c)
		co++;
	while (str[i] != 0)
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] != c && str[i] != 0 && str[i - 1] == c)
			co++;
		i++;
	}
	return (co);
}

static char	*c_to_zero(const char *strc, char c)
{
	int		u;
	char	*str;

	if (strc == NULL)
		return (NULL);
	str = ft_strdup((char *)strc);
	if (str == NULL)
		return (NULL);
	u = 0;
	while (str[u])
		u++;
	u--;
	while (u != -1)
	{
		if (str[u] == c)
		{
			str[u] = 0;
		}
		u--;
	}
	return (str);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**tab;
	char	*z;
	int		i;
	int		j;
	int		t;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	t = ft_strlen(s);
	z = c_to_zero((char *)s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (get_nb_mot((char *)s, c) + 1))))
		return (NULL);
	while (i != t)
	{
		if (((i == 0 && z[i] != 0) || \
		(z[i] != c && z[i] != 0 && z[i - 1] == 0))\
		&& (!(tab[j++] = ft_strdup(z + i))))
			return (NULL);
		i++;
	}
	tab[j] = 0;
	free(z);
	return (tab);
}

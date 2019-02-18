/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:21:38 by jmoussu           #+#    #+#             */
/*   Updated: 2019/02/18 17:26:19 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(const char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	while (str[i + j] != c && str[i + j] != '\0')
		j++;
	return (j);
}

static int		ft_countwords(const char *s, char c)
{
	int		i;
	int		nb_words;

	i = ft_strlen(s);
	nb_words = 0;
	while (i > 0)
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i] == '\0' && s[i - 1] != c))
			nb_words++;
		i--;
	}
	return (nb_words);
}

static char		**ft_filltab(const char *str, char c, char **tab)
{
	int		a;
	int		i;
	int		j;

	a = 0;
	i = 0;
	while (i < ft_countwords(str, c))
	{
		j = 0;
		tab[i] = (char *)malloc(sizeof(char) * (ft_len(str + a, c) + 1));
		while (str[a] == c && str[a] != '\0')
			a++;
		while (str[a] != c && str[a] != '\0')
		{
			tab[i][j] = str[a];
			j++;
			a++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**tab;

	if (s == NULL)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
		return (NULL);
	tab = ft_filltab(s, c, tab);
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:13:51 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/24 19:44:06 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	countnb(int n)
{
	int new;
	int i;

	i = 1;
	new = n;
	if (new < 0)
		new = -new;
	while (new >= 10)
	{
		new = new / 10;
		i++;
	}
	return (i);
}

static char	*ft_intmin(void)
{
	char	*str;

	if (!(str = ft_strdup("-2147483648")))
		return (NULL);
	return (str);
}

static char	*ft_clac(int n, int neg)
{
	char	*str;
	int		t;

	t = countnb(n);
	if (!(str = (char*)malloc(sizeof(char) * (t + 1 + neg))))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	str[t + neg] = 0;
	while (n >= 10)
	{
		str[--t + neg] = ((n % 10) + 48);
		n = (n / 10);
	}
	if (n < 10)
		str[--t + neg] = (n + 48);
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		t;

	neg = 0;
	t = countnb(n);
	if (n == INT32_MIN)
		return ((char *)ft_intmin());
	if (n < 0)
		neg = 1;
	str = (char *)ft_clac(n, neg);
	return (str);
}

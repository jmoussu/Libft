/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displaytab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:55:49 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/22 18:34:42 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_displaytab(int nb, char **tab)
{
	int i;

	i = 0;
	if (tab == NULL)
		return ;
	while (i < nb)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

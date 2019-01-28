/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:03:17 by jmoussu           #+#    #+#             */
/*   Updated: 2019/01/28 14:13:03 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_error(int fd, char **line, int *size)
{
	char	buf[BUFF_SIZE];

	*size = 0;
	if (fd < 0 || !line || read(fd, buf, 0) == -1)
		return (1);
	return (0);
}

int			calcend(char **sfd, int i, int size, char **line)
{
	while (((*sfd)[i] != '\n') && ((*sfd)[i] != '\0'))
		i++;
	if ((*sfd)[i] == '\0' && size < BUFF_SIZE && ft_strlen(*sfd) > 0)
	{
		if (!(*line = ft_strdupfree(*sfd)))
			return (-1);
		*sfd = *sfd + i;
		return (1);
	}
	return (0);
}

char		*lol(char *buff, char **sfd, int *i)
{
	char *startsave;
	char *line;

	if (!(*sfd = ft_strjoinfree(*sfd, buff, 1)))
		return ((char *)(-1));
	while (((*sfd)[*i] != '\n') && ((*sfd)[*i] != '\0'))
		(*i)++;
	if ((*sfd)[*i] == '\n')
	{
		(*sfd)[*i] = '\0';
		if (!(line = ft_strdup(*sfd)))
			return ((char *)(-1));
		startsave = *sfd;
		if (!(*sfd = ft_strdup(*sfd + *i + 1)))
			return ((char *)(-1));
		free(startsave);
		return (line);
	}
	return (NULL);
}

int			get_next_line(const int fd, char **line)
{
	static char *save[4864] = {NULL};
	t_var		var;

	if ((!(var.i = 0)) && ft_error(fd, line, &(var.size)) == 1)
		return (-1);
	(save[fd]) ? (save[fd]) : (save[fd] = ft_strdup(""));
	while (1)
	{
		if ((ft_strchr(save[fd], '\n')) == NULL)
		{
			if ((var.size = read(fd, var.buff, BUFF_SIZE)) == 0)
				break ;
			else if (var.size < 0)
				return (-1);
		}
		var.buff[var.size] = '\0';
		if ((var.ptr = lol(var.buff, save + fd, &(var.i))) == NULL)
			continue ;
		if (var.ptr == (char *)(-1))
			return (-1);
		else
			return ((*line = var.ptr) ? (1) : (1));
	}
	return (calcend(save + fd, var.i, var.size, line));
}

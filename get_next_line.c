/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:07:36 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/24 11:38:05 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
// s'arrete bien au \n mais si BUFFER_SIZE trop grand/petit bug (prevoir protection)

char	*ft_find_line(int fd)
{
	char	*str;
	int		ret;
	char	buf[BUFFER_SIZE + 1];
	char 	*tmp;
	int		i;

	while ((ret = (read(fd, buf, BUFFER_SIZE))) > 0)
	{
		i = 0;
		buf[ret] = '\0';
		if (str == NULL)
			str = ft_strdup(buf);
		else
			tmp = ft_strjoin(str, buf);
		while (str[i] != '\0')
		{
			if (str[i] == '\n')
			{
				//printf("Break");
				break;
			}
			i++;
		}
	}
	ft_putstr(str);
	return (str);
}

/*
int		get_next_line(int fd, char **line)
{
	int		i;

	while (buf[i] != '\0' && buf[i])
	i = 0;
	{
		str = ft_strjoin(str, buf)
		ft_strchr(str, '\n');
		i++;
	}
	ft_putstr("===========");
	ft_putstr(buf);
	return (0);
}
*/

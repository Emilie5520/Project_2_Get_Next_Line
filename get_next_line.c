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

int	get_next_line(int fd, char **line)
{
	int		ret;
	int		i;
	char	buf[BUFFER_SIZE + 1];
	char	*str;

	printf("CHECK");
	ret = (read(fd, buf, BUFFER_SIZE));
	buf[ret] = '\0';
	i = 0;
	printf("CHEEEECK")
	while (buf[i] != '\n' && buf) // s'arrete bien au \n mais si BUFFER_SIZE trop grand/petit bug (prevoir protection)
	//ft_putstr(buf);
	{
		//ft_putchar(buf[i]);
		printf("CHEEECK")
		str = ft_strjoin(str, buf);
		//str = ft_strcat(str,  buf);
		i++;
	}
	return (0);
}

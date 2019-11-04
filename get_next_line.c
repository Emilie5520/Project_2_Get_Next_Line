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

char	*ft_find_line(int fd, char *str)
{
	int		ret;
	char	buf[BUFFER_SIZE + 1];

	while ((ret = (read(fd, buf, BUFFER_SIZE))) > 0)
	{
		buf[ret] = '\0';
		if (str == NULL)
			str = ft_strdup(buf);
		else
			str = ft_strjoin(str, buf);
	}
	//printf("%s\n", str);
	return (str);
}

int		get_next_line(int fd, char **line)
{
	static char 	*save;
	int		i;

	if (ft_memcmp(save, *line))
		save = ft_find_line(fd, save);
	printf("%s\n", save);
	i = 0;
	if (!fd || !line)
		return (-1);
	printf("TEST2\n");
	if(save[i])
	{
		printf("TEST3\n");
		while (save[i] && save[i] != '\n')
			i++;
		printf("%d\n", i);
		if (i > 0)
		{
			printf("TEST5\n");
			*line = ft_strsub(save, 0, i);
			printf("%s\n", *line);
			printf("TEST6\n");
			save = &save[i + 1];
			printf("TEST7\n");

		}
		return (1);		
	}
	return (0);
}

/*int		get_next_line_split(int fd, char **line)
{
	static int		i;
	static char		str;
	char	buf[BUFFER_SIZE + 1];

	i = 0;
	while ((ret = (read(fd, buf, BUFFER_SIZE))) > 0)
	{
		buf[ret] = '\0';
		if (str == NULL)
			str = ft_strdup(buf);
		else
			str = ft_strjoin(str, buf);
	}
	
}*/
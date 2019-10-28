/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:47:38 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/24 11:21:49 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	 main(int argc, char **argv)
{
	int		fd;
	char	*line;

	line = NULL;
	fd = (open(argv[1], O_RDONLY));
	if (fd == -1)
	{
		ft_putstr("error");
		return (0);
	}
	ft_find_line(fd);
	//get_next_line(fd, &line);
	return (0);
}

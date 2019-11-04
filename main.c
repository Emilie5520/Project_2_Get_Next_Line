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
	int		s;
	char	*str;
	printf("TEST0\n");
	line = NULL;
	(void)argc;
	fd = (open(argv[1], O_RDONLY));
	//s = ft_find_line(fd, str);
	s = get_next_line(fd, &line);
	printf("%d\n", s);
	return (0);
}

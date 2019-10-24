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
//#define BUFFER_SIZE 500

int	 main(int argc, char **argv)
{
	int		fd;
	char	*line;

	line = NULL;
	//printf("CHECk");
	fd = (open(argv[1], O_RDONLY));
	if (fd == -1)
	{
		ft_putstr("error");
		return (0);
	}
	// printf("%d\n", fd); // retourne -1 quand ça marche pas et un entier positif ou nul utilisable pour read quand ça fonctionne
	printf("CHECK");
	printf("%s\n", get_next_line(fd, &line));
	return (0);
}

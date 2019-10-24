/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:08:36 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/24 11:38:00 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// pas besoin define BUFFER SIZE, compile le programme avec

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     get_next_line(int fd, char **line);
char	*ft_putstr(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcat(char *dest, char *src);

#endif

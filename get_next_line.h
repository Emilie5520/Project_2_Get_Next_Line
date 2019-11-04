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

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int         get_next_line(int fd, char **line);
char        *ft_putstr(char *str);
char        *ft_strchr_remix(char *s, int c);
char        *ft_strjoin(char *s1, char *s2);
char        *ft_strdup(char *src);
char        *ft_find_line(int fd, char *str);
char	    *ft_strsub(const char *s, unsigned int start, size_t len);
char 	    *ft_strcpy(char *dest, char *src);

#endif

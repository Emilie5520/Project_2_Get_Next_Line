/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 10:44:57 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/24 11:38:03 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (str);
}

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char 	*ft_strchr_remix(char *s, int c)
{	
	char	*tmp;
	int 	i;

	i = 0;
	while (*s != '\0' && *s != c)
	{
		ft_putchar(*s);
		s++;
	}	
}

char 	*ft_strjoin(char *s1, char *s2)
{
	int	len;
	char 	*s3;
	int 	i;
	int	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	s3 = (char *)malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);	
}


char	*ft_strnew(size_t size)
{
	char		*str;
	size_t		i;
	
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == NULL || size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}


char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	int	k;
	char	*dest;

	i = 0;
	j = 0;
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	dest = (char *)malloc(sizeof(char) * (k + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
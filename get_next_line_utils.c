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


int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*char 	*ft_strchr_remix(char *s, int c)
{	
	char	*tmp;
	int 	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	tmp = (char*)malloc(sizeof(char) * i + 1);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}*/

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

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char 		*str;
	size_t 		i;

	i = 0;
	if ( s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
int		strlen_like(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			j++;
		i++;
	}
	return (i - j);
}

int		count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c && str[i + 1] == c)
				|| (str[i] != c && str[i + 1] == '\0'))
			count += 1;
		i++;
	}
	return (count);
}

char	*strdup_like(char *src, char c)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = (char *)malloc(sizeof(char) * (strlen_like(src, c) + 1));
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	while (src[i] != '\0' && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s;
	if (s == NULL)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * count_words(str, c) + 1);
	if (res == NULL)
		return (NULL);
	while (i < count_words(str, c))
	{
		while (str[j] && str[j] == c)
			j++;
		res[i] = strdup_like(&str[j], c);
		while (str[j] && str[j] != c)
			j++;
		i++;
	}
	res[i] = 0;
	return (res);
}
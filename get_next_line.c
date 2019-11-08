/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:38:30 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/08 20:19:17 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h> 
#include <unistd.h>
#include <fcntl.h> 
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char*)malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char*)malloc(sizeof(*ptr) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	get_next_line(const int fd, char **line)
{
	char			buffer[BUFF_SIZE + 1];
	char			*tmp;
	static	char	*stack;
	int			n;
	int		i = 15;

	stack = ft_strnew(BUFF_SIZE);
	tmp = ft_strnew(BUFF_SIZE);

	while ((n = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[n] = '\0';
		//tmp = ft_strcpy(tmp, stack);
		
		stack = ft_strjoin(stack, buffer);
		//printf("%s\n", tmp);
		//printf("%d\n", i);
		printf("%s\n", stack);
		//printf("%d", i);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	
	/*if (argc == 2)
	{
		fd = open("foo.txt", O_RDONLY);
		while (get_next_line(fd, &line) > 0)
			printf("Output %s\n", line);
	}*/
	fd = open("foo.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		printf("Output %s\n", line);
	return (0);
}
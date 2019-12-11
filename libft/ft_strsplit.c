/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:34:51 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 10:32:17 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

int				ft_letc(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	int		x;
	int		y;

	if (!s)
		return (0);
	if (!(ptr = (char**)malloc(sizeof(char*) * (ft_strcount(s, c) + 1))))
		return (NULL);
	x = -1;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!(ptr[++x] = (char*)malloc(sizeof(char) * (ft_letc(s, c) + 1))))
				return (NULL);
			y = 0;
			while (*s && *s != c)
				ptr[x][y++] = *s++;
			ptr[x][y] = '\0';
		}
	}
	ptr[++x] = NULL;
	return (ptr);
}

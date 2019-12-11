/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 10:00:20 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 10:27:32 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

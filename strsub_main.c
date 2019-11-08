/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:04:13 by mhasan            #+#    #+#             */
/*   Updated: 2019/10/29 17:36:40 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	ptr = (char*)malloc(sizeof(*ptr) * (len + 1));
	if (!ptr || !s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int		main(void)
{
	char *str1 = "lorem ispusm dolor sit amet";
	unsigned int start = 7;
	int len = 10;

	printf("%s", ft_strsub(str1, start, len));
	return (0);

}
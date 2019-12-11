/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:30:25 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/01 16:22:46 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned	int	i;
	int				res;

	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (s1 == s2 ? 1 : 0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i + 1 < n)
		++i;
	res = s1[i] - s2[i];
	if (res == 0)
		return (1);
	else
		return (0);
}

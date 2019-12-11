/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:09:28 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/05 12:26:30 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (s < d)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else if (s > d)
		ft_memcpy(dst, src, len);
	return (dst);
}

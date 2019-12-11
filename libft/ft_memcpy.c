/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:50:29 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/01 17:18:15 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned	char			*d;
	const	unsigned	char	*s;

	d = (unsigned	char*)dest;
	s = (unsigned	char*)src;
	if (!n || dest == src)
		return (dest);
	while (n-- > 0)
	{
		*(d++) = *(s++);
	}
	return (dest);
}

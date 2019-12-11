/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 17:20:49 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 16:31:23 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lencal(long n)
{
	int result;

	result = 0;
	if (n < 0)
	{
		n = n * -1;
		result++;
	}
	if (n == 0)
		return (result + 1);
	while (n > 0)
	{
		n = n / 10;
		result++;
	}
	return (result);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*ptr;
	long	nbr;

	nbr = n;
	len = lencal(nbr);
	if (!(ptr = (char*)malloc(sizeof(*ptr) * (len + 1))))
		return (NULL);
	ptr[len--] = '\0';
	if (nbr == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		ptr[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (ptr);
}

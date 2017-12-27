/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 16:06:26 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/27 17:51:29 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		value(int x)
{
	if (0 <= x && x <= 9)
		return ('0' + x);
	else if (10 <= x && x <= 15)
	{
		x = x - 10;
		return ('a' + x);
	}
	return (0);
}

char			*ft_htoa(unsigned long n)
{
	char			*ret;
	size_t			len;
	unsigned long	x;

	x = n;
	len = 0;
	while (x > 16)
	{
		x = x / 16;
		len++;
	}
	if (!(ret = ft_strnew(len)))
		return (NULL);
	while (len--)
	{
		x = n % 16;
		ret[len] = value(x);
		n = n / 16;
		len--;
	}
	return (ret);
}

char			*ft_htoa_max(unsigned long n, size_t max)
{
	char			*p;
	char			ret[max];
	size_t			len;
	unsigned long	x;

	x = n;
	p = ret;
	len = 0;
	ft_memset(ret, '\0', max);
	while (x > 16)
	{
		x = x / 16;
		len++;
	}
	while (len--)
	{
		x = n % 16;
		ret[len] = value((int)x);
		n = n / 16;
		len--;
	}
	return (p);
}

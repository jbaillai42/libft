/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 16:06:26 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/29 22:59:28 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_htoa(unsigned long n)
{
	static char		charset[17] = "0123456789abcdef";
	char			*ret;
	size_t			len;
	unsigned long	x;

	x = n;
	len = 2;
	while (x)
	{
		x = x / 16;
		len++;
	}
	if (!(ret = ft_strnew(len)))
		return (NULL);
	*(short*)ret = ('x' << 8) | '0';
	while (len > 2)
	{
		ret[--len] = charset[n % 16];
		n = n / 16;
	}
	return (ret);
}

char			*ft_htoa_max(unsigned long n, size_t max)
{
	static char		charset[17] = "0123456789abcdef";
	char			*p;
	char			ret[max];
	size_t			len;
	unsigned long	x;

	x = n;
	p = ret;
	len = 2;
	ft_memset(ret, '\0', max);
	while (x)
	{
		x = x / 16;
		len++;
	}
	*(short*)ret = ('x' << 8) | '0';
	while (len > 2)
	{
		ret[--len] = charset[n % 16];
		n = n / 16;
	}
	return (p);
}

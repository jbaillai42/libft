/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:30:51 by jobailla          #+#    #+#             */
/*   Updated: 2018/11/11 21:34:52 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		is_base(char c, int base)
{
	char	*base_min;
	char	*base_maj;

	if (!(base_min = (char *)malloc(sizeof(char *) * 17)))
		return (0);
	if (!(base_maj = (char *)malloc(sizeof(char *) * 17)))
		return (0);
	base_min = "0123456789abcdef";
	base_maj = "0123456789ABCDEF";
	while (base--)
		if (base_min[base] == c || base_maj[base] == c)
			return (1);
	return (0);
}

static	int		value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int				ft_atoi_base(const char *str, int base)
{
	int		r;
	int		sign;

	r = 0;
	while (*str <= 32)
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? ++str : 0;
	while (is_base(*str, base))
		r = r * base + value(*str++);
	return (r * sign);
}

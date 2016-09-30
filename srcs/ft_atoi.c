/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 09:57:20 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/30 01:07:47 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int i;
	int ret;
	int neg;

	i = 0;
	ret = 0;
	neg = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\v'|| str[i] == ' ')
		i++;
	if (str[0] == '-')
		neg = 1;
	if (str[0] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1)
	{
		ret = ret * 10;
		ret = ret + str[i] - '0';
		i++;
	}
		return ((neg == 1) ? ret * (-1) : ret);
}

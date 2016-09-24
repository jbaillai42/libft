/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 09:57:20 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/24 17:07:44 by jobailla         ###   ########.fr       */
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
	while (str[i] == '\n' || str[i] == '\0' || str[i] == ' ')
		i++;
	if (str[0] == '-')
		neg = 1;
	if (str[0] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10;
		ret = ret + str[i] - '0';
		i++;
	}
		return ((neg == 1) ? ret * (-1) : ret);
}

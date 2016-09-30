/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 09:57:20 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/30 03:14:52 by jobailla         ###   ########.fr       */
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
	while ((ft_isspace(str[i])) == 1)
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1)
	{
		ret = ret * 10;
		ret = ret + str[i] - '0';
		i++;
	}
		return ((neg == 1) ? ret * (-1) : ret);
}

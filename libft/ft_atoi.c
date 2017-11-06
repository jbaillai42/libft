/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 09:57:20 by jobailla          #+#    #+#             */
/*   Updated: 2017/11/06 13:30:28 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** convertit la chaîne caractère pointée par str en type int.
*/

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int		ret;
	int		sign;

	ret = 0;
	while (ft_isspace(*str) || (*str >= 9 && *str <= 13))
		str++;
	sign = (*str == '-' ? -1 : 1);
	(*str == '-' || *str == '+') ? str++ : 0;
	while (ft_isdigit(*str))
		ret = ret * 10 + *str++ - '0';
	return (ret * sign);
}

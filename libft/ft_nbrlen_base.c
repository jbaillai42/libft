/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:06:42 by jobailla          #+#    #+#             */
/*   Updated: 2018/01/17 06:48:22 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int8_t		ft_nbrlen_base(uintmax_t n, int8_t base)
{
	int8_t	ret;

	ret = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / base;
		++ret;
	}
	return (ret);
}

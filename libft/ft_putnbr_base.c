/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:30:12 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/11 13:35:24 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_base(intmax_t nb, int base)
{
	ft_putnbr(ft_atoi_base(ft_itoa((int)nb), base));
}

int		main(void)
{
	ft_putnbr_base(1984, 16);
}

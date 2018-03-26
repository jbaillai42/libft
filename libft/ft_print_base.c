/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:07:03 by jobailla          #+#    #+#             */
/*   Updated: 2018/03/26 15:31:52 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_base(intmax_t n, int base)
{
	if (n >= base)
		ft_print_base(n / base, base);
	n %= base;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}

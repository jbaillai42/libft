/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:29:24 by jobailla          #+#    #+#             */
/*   Updated: 2018/03/29 01:07:21 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	char		*ret;
	size_t		len;
	intmax_t	nb;

	nb = n < 0 ? -(long)n : (long)n;
	len = ft_nbrlen_base(n, base);
	len += n < 0 ? 1 : 0;
	if (base < 2)
		return (0);
	if (!(ret = ft_strnew(len)))
		return (NULL);
	while (len--)
	{
		ret[len] = (nb % base < 10) ? nb % base + '0' : nb % base + 'A' - 10;
		nb /= base;
	}
	n < 0 ? ret[0] = '-' : 0;
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:29:24 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:09:25 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	char		*ret;
	size_t		len;
	intmax_t	nb;

	if (base < 2)
		return (0);
	len = ft_nbrlen_base(n , base);
	nb = (long)n;
	if (n < 0)
	{
		nb = -nb;
		len++;
	}
	if (!(ret = ft_strnew(len)))
		return (NULL);
	while (len--)
	{
		ret[len] = (nb % base < 10) ? (char)nb % base + '0' : (char)nb % base + 'A' - 10;
		nb /= base;
	}
	n < 0 ? ret[0] = '-' : 0;
	return (ret);
}

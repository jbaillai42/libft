/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:05:06 by jobailla          #+#    #+#             */
/*   Updated: 2017/11/11 22:21:24 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convertit le début de la chaîne pointée par nptr en entier de type int
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*ret;
	size_t		len;
	long		nb;

	len = ft_nbrlen(n);
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
		ret[len] = nb % 10 + '0';
		nb /= 10;
	}
	n < 0 ? ret[0] = '-' : 0;
	return (ret);
}

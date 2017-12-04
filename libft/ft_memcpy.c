/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:01:24 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 19:39:31 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copie n octets depuis la zone mémoire src vers la zone mémoire dest.
** Les deux zones ne doivent pas se chevaucher.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	if (!(n) || dst == src)
		return (dst);
	d = (char *)dst;
	s = (const char *)src;
	while (n--)
		*d++ = *s++;
	return (d);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:22:11 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:51:24 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie au plus n octets de la zone mémoire src vers
** la zone mémoire dest, s'arrêtant dès qu'elle rencontre le caractère c.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char *s;
	unsigned char		ch;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	ch = (unsigned char)c;
	while (n--)
	{
		*d++ = *s++;
		if (*s == ch)
			return ((void *)d);
	}
	return (NULL);
}

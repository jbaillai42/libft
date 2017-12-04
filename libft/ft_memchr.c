/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:19:35 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:55:42 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** examine les n premiers octets de la zone mémoire pointée par src à
** la recherche du caractère c. Le premier octet correspondant à c
** (interprété comme un unsigned char) arrête l'opération.
*/

#include "libft.h"

const	void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*s;
	unsigned char		ch;

	s = (const unsigned char *)src;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*s == ch)
			return ((const void *)s);
		s++;
	}
	return (NULL);
}

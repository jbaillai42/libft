/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:19:35 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/19 19:25:31 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** examine les len premiers octets de la zone mémoire pointée par src à 
la recherche du caractère c. Le premier octet correspondant à c 
** (interprété comme un unsigned char) arrête l'opération.
*/

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	ch;

	s = (unsigned char *)src;
	ch = (unsigned char)c;
	while (len--)
	{
		if (*s == ch)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
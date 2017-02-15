/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 23:52:05 by jobailla          #+#    #+#             */
/*   Updated: 2017/01/19 02:11:20 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** emplit les len premiers octets de la zone mémoire pointée par s avec 
** l'octet c.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*mem;

	if (len == 0)
		return (b);
	mem = (char *)b;
	while (len--)
		*mem++ = (char)c;
	return (b);
}

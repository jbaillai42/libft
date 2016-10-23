/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 23:52:05 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/23 16:10:31 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* remplit les len premiers octets de la zone mémoire pointée par b 
	avec l'octet c.  */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;

	if (len == 0)
		return (b);
	mem = (unsigned char *)b;
	while (len)
	{
		*mem = (unsigned char)c;
		mem++;
		len--;
	}
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 23:52:05 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 13:02:46 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** emplit les n premiers octets de la zone mémoire pointée par s avec
** l'octet c.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*mem;

	if (n == 0)
		return (b);
	mem = (char *)b;
	while (n--)
		*mem++ = (char)c;
	return (b);
}

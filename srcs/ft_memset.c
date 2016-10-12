/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 23:52:05 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/12 11:30:33 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Remplir une zone mémoire avec un octet donné. */

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

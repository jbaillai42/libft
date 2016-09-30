/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 23:52:05 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/01 00:12:56 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(int n, void *s, size_t c)
{
	unsigned char	*mem;

	if (c == 0)
		return (s);
	mem = (unsigned char *)s;
	while (c)
	{
		*mem = (unsigned char)n;
		mem++;
		c--;
	}
	return (s);
}

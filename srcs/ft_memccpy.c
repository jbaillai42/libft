/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:22:11 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/07 14:47:29 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *d;
	char *s;
	char ch;

	d = (char *)dst;
	s = (char *)src;
	ch = (char)c;
	while (n--)
	{
		*d = *s;
		if (*s == ch)
			return ((void *)d + 1);
		s++;
		d++;
	}
	return (NULL);
}

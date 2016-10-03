/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 23:41:30 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/03 00:10:37 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(dest);
	while ((src[i] != '\0') && (i < n))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}

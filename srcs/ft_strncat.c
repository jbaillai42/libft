/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 23:41:30 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/12 11:37:27 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Concaténer deux chaînes */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while ((s2[i] != '\0') && (i < n))
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[i + len] = '\0';
	return (s1);
}

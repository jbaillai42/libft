/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 23:54:39 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/05 23:00:16 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	len = 0;
	i = 0;
	if ((little[i] == '\0') && (i < len))
		return (char *)big;
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[j + i])
		{
			if (little[j + 1] == '\0')
				return (char *)big + i;
			j++;
		}
		i++;
	}
	return (0);
}

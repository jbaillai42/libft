/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 23:54:39 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/23 15:10:21 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rechercher une sous-chaîne. */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if ((little[0] == '\0' || ft_isspace(*little == 1)) && (big))
		return (char *)big;
	while (i <= len)
	{
		j = 0;
		while (little[j] == big[j + i])
		{
			if (big < little)
				return (0);
			if (little[j + 1] == '\0')
				return (char *)big + i;
			if (!len && little[j + 1] == '\0')
				return (char *)big;
			j++;
			len--;
		}
		i++;
	}
	return (0);
}

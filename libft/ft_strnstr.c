/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 23:54:39 by jobailla          #+#    #+#             */
/*   Updated: 2017/02/16 12:25:22 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Cherche la première occurrence de la sous-chaîne aiguille au sein de la
** chaîne meule_de_foin. en fonction de n.
** Les caractères « \0 » de fin ne sont pas comparés.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if ((little[0] == '\0' || ft_isspace(*little == 1)) && (big))
		return (char *)big;
	while (big[i] && i <= n)
	{
		j = 0;
		while (little[j] == big[j + i] && i + j < n)
		{
			if (little[j + 1] == '\0')
				return (char *)big + i;
			j++;
		}
		i++;
	}
	return (0);
}

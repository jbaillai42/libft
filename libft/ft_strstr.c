/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 21:58:20 by jobailla          #+#    #+#             */
/*   Updated: 2017/12/04 18:20:54 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Cherche la première occurrence de la sous-chaîne aiguille au sein de la
** chaîne meule_de_foin. Les caractères « \0 » de fin ne sont pas comparés.
*/

#include "libft.h"

char	*ft_strstr(char *big, char *little)
{
	size_t i;
	size_t j;

	i = 0;
	if ((*little == '\0' || ft_isspace(*little == 1)))
		return (char *)big;
	while (big[i])
	{
		j = 0;
		while (little[j] == big[i + j])
		{
			if (little[j + 1] == '\0')
				return (char *)big + i;
			j++;
		}
		i++;
	}
	return (0);
}

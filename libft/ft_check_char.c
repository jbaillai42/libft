/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 00:51:19 by jobailla          #+#    #+#             */
/*   Updated: 2017/11/11 01:44:43 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction renvoie (1) si c est contenu dans str entre str[0] - str[i]
 */

#include "libft.h"

int		ft_check_char(const char *str, char c, int i)
{
	int		k;

	k = -1;
	while (++k < i)
		if (str[k] == c)
			return (1);
	return (0);
}

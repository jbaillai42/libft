/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 12:43:23 by jobailla          #+#    #+#             */
/*   Updated: 2016/08/16 17:15:53 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	tab = (int*)malloc(sizeof(tab) * (max - min));
	while (max < min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

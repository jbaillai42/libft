/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:45:26 by jobailla          #+#    #+#             */
/*   Updated: 2016/08/16 15:43:14 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
	{
		*range = (void*)NULL;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * (max - min));
	while (max < min)
	{
		*range[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (1);
}

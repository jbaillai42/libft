/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 17:54:53 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/12 11:25:53 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Affiche la chaine s sur la sortie standard. */

#include "libft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 19:24:43 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/24 16:19:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr("ft_putchar = ");
		ft_putchar(*argv[i]);
		ft_putchar('\n');
		ft_putstr("putchar = ");
		putchar(*argv[i]);
		i++;
	}
}

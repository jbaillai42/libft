/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 01:35:43 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/29 01:36:31 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr("ft_isprint = ");
		ft_putnbr(ft_isprint(*argv[i]));
		ft_putchar('\n');
		ft_putstr("isprint = ");
		printf("%d", isprint(*argv[i]));
		i++;
	}
}

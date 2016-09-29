/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 01:34:21 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/29 01:35:05 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr("ft_isascii = ");
		ft_putnbr(ft_isascii(*argv[i]));
		ft_putchar('\n');
		ft_putstr("isascii = ");
		printf("%d", isascii(*argv[i]));
		i++;
	}
}

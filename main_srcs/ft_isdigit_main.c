/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 01:30:33 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/29 01:32:52 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr("ft_isdigit = ");
		ft_putnbr(ft_isdigit(*argv[i]));
		ft_putchar('\n');
		ft_putstr("isdigit = ");
		printf("%d", isdigit(*argv[i]));
		i++;
	}
}

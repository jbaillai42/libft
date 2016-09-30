/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 00:25:53 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/30 00:28:48 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 2)
	{
		ft_putstr("ft_atoi = ");
		ft_putnbr(ft_atoi(argv[i]));
		ft_putchar('\n');
		ft_putstr("atoi = ");
		printf("%d", atoi(argv[i]));
	}
}

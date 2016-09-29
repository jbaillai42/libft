/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 01:33:10 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/29 01:50:53 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr("ft_isalnum = ");
		ft_putnbr(ft_isalnum(*argv[i]));
		ft_putchar('\n');
		ft_putstr("isalnum = ");
		printf("%d", isalnum(*argv[i]));
		i++;
	}
}

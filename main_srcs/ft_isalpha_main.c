/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 01:01:54 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/29 01:31:03 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr("ft_isalpha = ");
		ft_putnbr(ft_isalpha(*argv[i]));
		ft_putchar('\n');
		ft_putstr("isalpha = ");
		printf("%d", isalpha(*argv[i]));
		i++;
	}
}

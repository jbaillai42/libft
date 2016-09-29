/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 02:09:06 by jobailla          #+#    #+#             */
/*   Updated: 2016/09/29 02:09:55 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 2)
	{
		ft_putstr("ft_tolower = ");
		ft_putchar(ft_tolower(*argv[i]));
		ft_putchar('\n');
		ft_putstr("tolower = ");
		printf("%c", tolower(*argv[i]));
	}
	else
		ft_putstr("Erreur : entrez un seul agument.\n");
}

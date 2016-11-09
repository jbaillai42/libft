/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 01:50:37 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/09 13:24:21 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 2)
	{
		ft_putstr(B"ft_toupper = ");
		printf("%d\n", ft_toupper(*argv[i]));
		ft_putstr(G"toupper = ");
		printf("%d\n", toupper(*argv[i]));
	}
	else
		ft_putstr(R"Erreur : Entez un argument.\n");
}

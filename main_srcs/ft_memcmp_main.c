/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:27:33 by jobailla          #+#    #+#             */
/*   Updated: 2016/11/07 16:32:49 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("ft_memcmp : %d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
		printf("   memcmp : %d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
		
	}
}

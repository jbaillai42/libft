/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 09:57:20 by jobailla          #+#    #+#             */
/*   Updated: 2016/08/10 18:25:42 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int ret;
	int neg;

	i = 0;
	ret = 0;
	while (str[i] == '\n' || str[i] == '\0' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10;
		ret = ret + str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-ret);
	else
		return (ret);
}

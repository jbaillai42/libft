/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 13:26:39 by jobailla          #+#    #+#             */
/*   Updated: 2016/08/06 21:10:49 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

void	ft_swap(char *a, char *b);

char	*ft_strrev(char *str)
{
	int		len;
	char	*a;
	char	*b;

	len = ft_strlen(str);
	a = str;
	b = str + len - 1;
	if (str)
	{
		while (a - str < len / 2)
		{
			ft_swap(a, b);
			a++;
			b--;
		}
	}
	return (str);
}

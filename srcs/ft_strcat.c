/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 10:32:16 by jobailla          #+#    #+#             */
/*   Updated: 2016/08/25 14:26:38 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}

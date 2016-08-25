/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:03:08 by jobailla          #+#    #+#             */
/*   Updated: 2016/08/25 14:45:13 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
void	ft_is_negative(int n);
void	ft_print_alphabet(void);
void	ft_print_numbers(void);
void	ft_print_reverse_alphabet(void);

char	*ft_strcapitalize(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strrev(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strupcase(char *str);
char	*ft_concat_params(int argc, char **argv);

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);

#endif

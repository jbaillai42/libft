/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:03:08 by jobailla          #+#    #+#             */
/*   Updated: 2016/10/03 00:19:10 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putendl(char const *s);
void	*ft_memset(int n, void *s, size_t c);
void	ft_bzero(void *s, size_t c);

int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_strcmp(char *s1, char *s2);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_isxdigit(int n);
int		ft_isdigit(int n);
int		ft_isalpha(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
int		ft_isspace(int n);
int		ft_isblank(int n);
int		ft_isgraph(int n);
int		ft_ispunct(int n);
int		ft_islower(int n);
int		ft_isupper(int n);
int		ft_toupper(int n);
int		ft_tolower(int n);

char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strncat(char *dest, char *src, size_t n);
char	*ft_strnstr(char *str, char *to_find, size_t n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strnew(size_t size);


#endif

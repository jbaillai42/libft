/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:03:08 by jobailla          #+#    #+#             */
/*   Updated: 2018/03/26 15:31:30 by jobailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define NRM	"\x1B[0m"
# define RED	"\x1B[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define BLU	"\x1B[34m"
# define MAG	"\x1B[35m"
# define CYN	"\x1B[36m"
# define WHT	"\x1B[37m"

typedef struct		s_list
{
	void			*content;
	char			*str;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
const void			*ft_memchr(const void *src, int c, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_swap(void *a, void *b, size_t size);
void				ft_bzero(void *s, size_t n);
void				ft_memdel(void **ap);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(intmax_t n);
void				ft_putnbr_base(intmax_t n, int base);
void				ft_putnbr_fd(intmax_t nb, int fd);
void				ft_print_base(intmax_t n, int base);
void				ft_putstr(const char *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

int					ft_putchar(char c);
int					ft_atoi(const char *str);
int					ft_atoi_base(const char *str, int base);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
int					ft_check_char(char const *str, char c, int i);
int					ft_isblank_and_newline(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_count_word(char const *s, int c);

size_t				ft_strlen(const char *s);
size_t				ft_binlen(intmax_t bin);
size_t				ft_lstlen(t_list *start);
size_t				ft_nbrlen(intmax_t n);
int8_t				ft_nbrlen_base(uintmax_t n, int8_t base);
size_t				ft_strlcat(char *dst, const char *src, size_t size);

char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_htoa(unsigned long n);
char				*ft_htoa_max(unsigned long n, size_t max);
char				*ft_itoa_base(int nb, int base);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(char *s, int c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, char *src, size_t n);
char				*ft_strnew(size_t size);
const char			*ft_strnstr(const char *big, const char *little,
		size_t len);
const char			*ft_strrchr(const char *s, int c);
char				*ft_strstr(char *big, char *little);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strrev(char *str);

#endif

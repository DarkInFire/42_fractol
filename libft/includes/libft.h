/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 19:15:01 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/19 17:31:14 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FL_BUFF 32
# define GNL_BUFFER 32
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/types.h>
# include <inttypes.h>
# define FT_MIN(x, y) (x) < (y) ? (x) : (y)
# define FT_MAX(x, y) (x) > (y) ? (x) : (y)

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_pos
{
	int				x;
	int				y;
	int				z;
}					t_pos;

typedef struct		s_fd
{
	int				id;
	int				i;
	int				j;
	int				rret;
	char			*buffer;
	struct s_fd		*next;
}					t_fd;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_filecpy(char *input, char *output);
void				ft_strmerge(char **s1, char **s2);
char				*ft_strndup(const char *s1, size_t n);
void				ft_swapptr(void *a, void *b);
void				ft_swapint(int *a, int *b);
void				ft_srttab(int *tab, size_t n);
t_pos				*ft_getpos(int x, int y, int z);
void				ft_lstaddlast(t_list **list, t_list *new);
int					ft_highsqrt(int n);
int					ft_lstcount(t_list *list);
int					ft_gnl(int const fd, char **line);
void				ft_putnstr(char const *str, size_t str_len);
void				ft_putnstr_fd(char const *str, size_t str_len, int fd);
int					ft_max(int x, int y);
int					ft_putnbrbase_fd(uintmax_t nbr, char *base, int fd);
char				*ft_itoa_base(uintmax_t nbr, char *base);
int					ft_putnbrbase(uintmax_t nbr, char *base);
size_t				ft_nstrlen(const char *str, size_t maxlen);
void				ft_putwchar(wchar_t chr);
void				ft_putwchar_fd(wchar_t chr, int fd);
void				ft_putwstr_fd(wchar_t const *str, int fd);
void				ft_putwstr(wchar_t const *str);
void				ft_putnwstr(const wchar_t *str, size_t len);
void				ft_lstaddnlast(t_list **list, void const *content,
						size_t content_size);
int					ft_abs(int v);
void				ft_printtab(int **tab, size_t h, size_t w);

#endif

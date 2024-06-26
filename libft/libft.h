/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:56:14 by gde-sa            #+#    #+#             */
/*   Updated: 2024/05/09 21:14:24 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
# include <string.h>

/* printf */
# define BASE_HEXA_LOWER "0123456789abcdef"
# define BASE_HEXA_UPPER "0123456789ABCDEF"

/* gnl */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

void			ft_putchar(char c);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlen(const char *x);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_atoi(const char *nptr);
char			*ft_strdup(const char *s);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_itoa(int n);
int				ft_printf(const char *format, ...);
void			ft_convert_hexa(unsigned int n, char format, int *count);
void			ft_after_percentage(va_list args, char format, int *count);
void			ft_putnbr_base_ten(int n, int *count);
void			ft_putnbr_pointer(size_t *ptr, int *count);
void			ft_putnbr_unsigned(unsigned int n, int *count);
void			ft_putstr_printf(char *str, int *count);
void			ft_putchar_printf(char c, int *count);
char			*get_next_line(int fd);
int				ft_source_n(char *s);
size_t			ft_strlen_gnl(char *x);
char			*ft_strdup_gnl(char *s);
char			*ft_strjoin_gnl(char *s1, char *s2);
char			*ft_substr_gnl(char *s, unsigned int start, size_t len);
void			*clear_memory_gnl(char *s1, char *s2);
void			*ft_calloc_gnl(size_t nitems, size_t size);

#endif
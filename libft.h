/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:16:58 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/11 22:36:34 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include "string.h"
#include "stdlib.h"
#include "unistd.h"

void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *dst, const void *src, size_t n);

void		*ft_memccpy(void *dst, const void *src, int c, size_t n);

void		*ft_memset(void *b, int c, size_t len);

void		*ft_memmove(void *dst, const void *src, size_t len);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

void		*ft_memchr(const void *s, int c, size_t n);

void		ft_putchar(char c);

void		ft_putstr(const char *s);

void		ft_putnbr(int n);

void		ft_putstr_fd(char const *s, int fd);

void		ft_putchar_fd(char c, int fd);

void		ft_putnbr_fd(int n, int fd);

char		*ft_strdup(const char *s1);

size_t		ft_strlen(const char *s);

char		*ft_strnew(size_t size);

char		*ft_strdup(const char *s1);

char		*ft_strcpy(char *dst, const char *src);

char		*ft_strncat(char *s1, const char *s2, size_t n);

char		*ft_strchr(const char *s, int c);

char		*ft_strstr(const char *big, const char *little);

char		*ft_strnstr(const char *big, const char *little, size_t len);

int			ft_atoi(const char *str);

int			ft_isalpha(int c);

void		*ft_memalloc(size_t size);

void		*ft_memalloc(size_t size);

int			ft_strnequ(char const *s1, char const *s2, size_t n);

char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strtrim(char const *s);

char		**ft_strsplit(char const *s, char c);

int			ft_strcmp(const char *s1, const char *s2);

char		*ft_itoa(int n);

#endif

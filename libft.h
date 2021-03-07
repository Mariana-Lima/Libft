/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:12:44 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 01:06:12 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// # include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <strings.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		isascii(int c);
int		isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const char *s1, const char *s2, size_t n);
int		ft_strlcat(char *dest, const char *src, int size);
int		ft_strlcpy(char *dest, const char *src, int size);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_itoa(int n);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strrchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strlowcase(char *str);
char	*ft_strupcase(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest,const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);

#endif

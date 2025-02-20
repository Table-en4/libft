/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:13:35 by molapoug          #+#    #+#             */
/*   Updated: 2025/02/18 11:02:51 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* include des libs nécessaires à la libft */
# include <unistd.h>
# include <stdlib.h>

/* lib a supprimer plus tard */
# include <stdio.h>
# include <string.h>

/* fonctions prototypés avec des int */
int		ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(char *s1, char *s2, int n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_islower_alpha(int c);
int		ft_isupper_alpha(int c);
int		ft_tolower(int c);

/* fonctions prototypés avec des char */
char	*ft_strcat(char *dest, char *src);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strnstr(char *str, char *to_find, int n);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, int n);
char	*ft_strncat(char *dest, char *src, int n);

/* fonctions prototypés avec des void */
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_memcpy(char *dest, char *src, int size);
void	*ft_memccpy(char *dest, char *src, int ch, int size);
void	*ft_memmove(char *dest, char *src, int size);

#endif

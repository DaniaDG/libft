/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:29:31 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/05 17:40:54 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

size_t	ft_strlen(const char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *str1, const char *str2);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strncpy(char *dest, const char *src, size_t count);
void	*ft_memset(void *buf, int ch, size_t count);
void	ft_bzero(void *s, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
void	*ft_memcpy(void *dest, const void *src, size_t count);

#endif

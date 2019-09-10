/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:34:08 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/07 14:34:09 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t		words_nb(char const *s, char c)
{
	size_t n;

	n = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			n++;
		s++;
	}
	if (!*s && *(s -1) != c)
		n++;
	return (n);
}

static size_t		word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s == c)
		s++;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**arr_w;
	size_t			len;
	size_t			nb;
	size_t			i;

	if (!s)
		return (NULL);
	nb = words_nb(s, c);
	if (!(arr_w = (char**)malloc(sizeof(char*) * (nb + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = word_len(s, c);
			if (!(*arr_w = ft_strsub(s, 0, len)))
				return (NULL);
			arr_w++;
			s = s + len;
		}
	}
	*arr_w = (NULL);
	return (arr_w - nb);
	}
	

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

static int		words_nb(char const *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			n++;
		i++;
	}
	if (!s[i] && s[i - 1] != c)
		n++;
	return (n);
}

static int		word_len(char const *s, char c)
{
	int	len;

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
	int				nb;

	if (!s)
		return (NULL);
	nb = words_nb(s, c);
	arr_w = (char**)malloc(sizeof(char*) * (nb + 1));
	if (!arr_w)
		return (NULL);
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

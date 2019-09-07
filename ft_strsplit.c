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

static void		put_words(char **array ,char const *s, char c)
{
	
}
char	**ft_strsplit(char const *s, char c)
{
	char			**arr_w;
	unsigned int	start;
	size_t			len;

	*arr_w = (char**)malloc(sizeof(char*) * (words_nb(s, c) + 1));
	if (!arr)
		return (NULL);

	
}

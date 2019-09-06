/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:55:03 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/06 13:05:11 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		n;

	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			n = i;
		i++;
	}
	if (s[i] == ch)
		n = i;
	if (n == 0 && s[0] != ch)
		return (NULL);
	return ((char*)(s + n));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:32:40 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/07 14:32:42 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*result;

	ptr = NULL;
	ptr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	result = ptr;
	if (ptr)
	{
		while (*s)
			*ptr++ = f(*s++);
	}
	*ptr = '\0';
	return (result);
}

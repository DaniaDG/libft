/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 11:17:58 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/04 11:50:17 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t count)
{
	size_t	i;

	i = 0;
	while ((dest[i] || src[i]) && i < count)
	{
		dest[i] = src[i];
		i++;
	}
	if (!dest[i] || i == count)
		return (dest);
	while (dest[i])
		dest[i++] = '\0';
	return (dest);
}

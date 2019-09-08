/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:35:26 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/06 18:36:07 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar(char c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (ft_isascii((unsigned char)c))
		write(1, &c, 1);
	else
		write(1, &a, 4);
}

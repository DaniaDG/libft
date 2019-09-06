/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:20:13 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/06 21:20:14 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	num[10];

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	i = 0;
	if (n < 0)
	{
		num[i++] = (n % 10) * (-1) + '0';
		n = (n / 10) * (-1);
		write(fd, "-", 1);
	}
	while (n)
	{
		num[i++] = n % 10 + '0';
		n = n / 10;
	}
	i--;
	while (i >= 0)
		write(fd, &num[i--], 1);
}

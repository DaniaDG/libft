/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:36:10 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/03 19:48:26 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include <limits.h>

int		ft_abs(int a)
{
	return ((a >= 0 || a == INT_MIN) ? a : -a);
}

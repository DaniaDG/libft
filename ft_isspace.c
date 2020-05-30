/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsausage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:36:10 by bsausage          #+#    #+#             */
/*   Updated: 2019/09/03 19:48:26 by bsausage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char ch)
{
	if ((ch == '\n' ||
		ch == '\t' ||
		ch == ' ' ||
		ch == '\r' ||
		ch == '\v' ||
		ch == '\f'))
		return (1);
	return (0);
}
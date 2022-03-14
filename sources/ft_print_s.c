/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:15:18 by dvilard           #+#    #+#             */
/*   Updated: 2021/11/23 11:29:06 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_s(char *s)
{
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (4);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s) - 2);
}
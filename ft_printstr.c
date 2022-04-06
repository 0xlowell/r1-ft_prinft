/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <lzima@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:55:04 by lzima             #+#    #+#             */
/*   Updated: 2021/11/30 21:18:53 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	ret;

	ret = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		write(1, str++, 1);
		ret++;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <lzima@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:58:07 by lzima             #+#    #+#             */
/*   Updated: 2021/11/30 21:00:04 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_long(unsigned int u)
{
	unsigned int	r;
	char			*temp;

	temp = ft_itoa_unsigned(u);
	r = ft_printstr(temp);
	free(temp);
	return (r);
}

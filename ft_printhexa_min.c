/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <lzima@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:56:40 by lzima             #+#    #+#             */
/*   Updated: 2021/11/30 20:59:41 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	countbase(unsigned long long int nb)
{
	unsigned int	count;

	count = 0;
	if (nb == 0)
		count++;
	while (nb > 0)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

int	ft_printhexa_min(unsigned long long int nb)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb >= 0 && nb <= 15)
		ft_printchar(hexa[nb]);
	else
	{
		ft_printhexa_min(nb / 16);
		ft_printhexa_min(nb % 16);
	}
	return (countbase(nb));
}

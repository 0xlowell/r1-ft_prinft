/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_maj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <lzima@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:57:21 by lzima             #+#    #+#             */
/*   Updated: 2022/02/21 10:13:26 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



static unsigned int	countbase(unsigned int nb)
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

int	ft_printhexa_maj(unsigned long int nb)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (nb >= 0 && nb <= 15)
		ft_printchar(hexa[nb]);
	else
	{
		ft_printhexa_maj(nb / 16);
		ft_printhexa_maj(nb % 16);
	}
	return (countbase(nb));
}

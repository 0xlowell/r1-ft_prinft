/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <lzima@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:34:59 by lzima             #+#    #+#             */
/*   Updated: 2022/02/08 15:35:20 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	print_args(char toprint, va_list args)
{
	int ret;
	ret = 0;
	if (toprint == 'c')
		ret += ft_printchar(va_arg(args, int));
	if (toprint == 's')
		ret += ft_printstr(va_arg(args, char *));
	if (toprint == 'i' || toprint == 'd')
		ret += ft_printnbr(va_arg(args, int));
	if (toprint == 'x')
		ret += ft_printhexa_min(va_arg(args, unsigned int));
	if (toprint == 'X')
		ret += ft_printhexa_maj(va_arg(args, unsigned int));
	if (toprint == 'u')
		ret += ft_printnbr_long(va_arg(args, unsigned int));
	if (toprint == '%')
		ret += ft_printchar('%');
	if (toprint == 'p')
	{
		ret += ft_printstr("0x");
		ret += ft_printhexa_min(va_arg(args, unsigned long int));
	}
	return (ret);
}

int	ft_printf(const char *toprint, ...)
{
	va_list	args;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(args, toprint);
	if (!toprint)
		return (0);
	while (toprint[i])
	{
		if (toprint[i] == '%')
		{
			i++;
			ret = print_args(toprint[i], args);
		}
		else
			ret += write(1, &toprint[i], 1);
		i++;
	}
	va_end(args);
	return (ret);
}
// int main()
// {
// 	ft_printf("%d", 4456);
// 	return(0);
// }
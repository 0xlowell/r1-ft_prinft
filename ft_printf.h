/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <lzima@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:27:56 by lzima             #+#    #+#             */
/*   Updated: 2022/02/08 15:33:17 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *toprint, ...);
int		ft_printchar(char c);
int		ft_printhexa_maj(unsigned long int nb);
int		ft_printhexa_min(unsigned long long int nb);
int		ft_printnbr_long(unsigned int u);
int		ft_printnbr(int n);
int		ft_printstr(char *str);
int		print_args(char toprint, va_list args);

char	*ft_itoa(int n);
char	*ft_itoa_unsigned(unsigned int n);

#endif

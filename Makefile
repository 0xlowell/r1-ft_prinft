# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzima <lzima@student.42lausanne.ch>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 19:51:36 by lzima             #+#    #+#              #
#    Updated: 2021/11/30 21:22:25 by lzima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				= 	ft_printchar.c \
					ft_itoa_unsigned.c \
					ft_itoa.c \
				  	ft_printstr.c \
					ft_printnbr.c \
				 	ft_printhexa_min.c \
				 	ft_printhexa_maj.c \
				 	ft_printnbr_long.c \
				 	ft_printf.c \
					


OBJS			= $(SRC:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a



$(NAME):		$(OBJS)
						ar rc $(NAME) $(OBJS)

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

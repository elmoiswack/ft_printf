# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 12:05:12 by dhussain          #+#    #+#              #
#    Updated: 2022/10/31 09:51:09 by dhussain      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:=	libftprintf.a

SRC	:=	ft_printf.c \
		ft_printf_pointer.c \
		ft_printf_char.c \
		ft_printf_int.c \
		ft_printf_string.c \
		ft_printf_unsigndec.c \
		ft_printf_hexalower.c \
		ft_printf_hexaupper.c \
		ft_intcheck.c \
		ft_mallocaaa.c

OBJ := $(SRC:.c=.o)

CC	:=	gcc

CFLAGS	:=	-Wall -Werror -Wextra

$(NAME): $(OBJ)
	ar -cr $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

all: $(NAME) 

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re

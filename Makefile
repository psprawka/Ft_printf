# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 16:36:26 by psprawka          #+#    #+#              #
#    Updated: 2017/11/09 16:36:27 by psprawka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/24 11:51:37 by psprawka          #+#    #+#              #
#    Updated: 2017/10/07 20:04:53 by psprawka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
SRC_DIR = srcs/
FILES =	ft_printf.c \
	ft_strlen.c \
	ft_strnew.c \
	ft_putstr.c \
	ft_putchar.c \ope
	ft_putnbr.c \
	ft_memset.c \
		

CFLAGS = -Wall -Wextra -Werror
HEAD = ./includes
SRC	:=	$(addprefix $(SRC_DIR)/, $(FILES))
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc $(CFLAGS) -I $(HEAD) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

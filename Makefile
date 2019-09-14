# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/24 11:51:37 by psprawka          #+#    #+#              #
#    Updated: 2019/09/14 23:40:03 by psprawka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
FLAGS += -g -Wall -Wextra -Werror
# FLAGS +=  -fsanitize=address

SRC_DIR = srcs/
FILES =	ft_printf.c \
		print.c \
		gather_flags.c \
		str_chr.c \
		ptr_dbl.c \
		int_uint.c \
		tools.c \
		ft_libftprintf.c \
		

HEAD = ./includes
SRC	:=	$(addprefix $(SRC_DIR), $(FILES))
OBJ = $(SRC:.c=.o)

LIBFT 		= libft/libft.a

BUILD_PRINT = @echo "\r\033[38;5;214m[FT_PRINTF] \x1B[33mBuilding $<"
DONE = @echo "\033[K\033[1;38;5;226mFT_PRINTF ready to use!\x1B[0m"
CLEAN_O = @echo "\033[38;5;246mObject files removed! [FT_PRINTF]\x1B[0m"
CLEAN_A = @echo "\033[38;5;246mExecutable removed! [FT_PRINTF]\x1B[0m"

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	$(DONE)

$(OBJ): %.o: %.c
	$(BUILD_PRINT)
	@gcc $(CFLAGS) -I $(HEAD) -c $< -o $@

clean:
	@/bin/rm -rf $(OBJ)
	$(CLEAN_O)

fclean: clean
	@/bin/rm -rf $(NAME)
	$(CLEAN_A)

re: fclean all

.PHONY: all clean fclean re
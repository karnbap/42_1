# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seojeon <seojeon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/23 12:10:00 by seojeon           #+#    #+#              #
#    Updated: 2024/01/06 19:19:08 by seojeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = $(shell find . -name "*.c")

OBJ = $(SRC:.c=.o)

all: $(NAME)

NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = $(shell find . -name "*.c")

OBJ = $(SRC:.c=.o)

%.o: %.c
	@cc $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re


so:
	@$(CC) -nostartfiles -fPIC $(FLAG) -c $(SRC)
	@gcc -nostartfiles -shared -o libft.so $(OBJ)
	@echo "libft.so 생성 완료"

warmachine :
	@git clone git@github.com:karnbap/warmachine_libft
	@cd warmachine_libft && bash grademe.sh && bash grademe.sh

valgrind : 
	@git clone git@github.com:karnbap/valgrind_libft
	@cd valgrind_libft && make Updated

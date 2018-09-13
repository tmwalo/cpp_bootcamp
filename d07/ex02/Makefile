# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 07:54:17 by tmwalo            #+#    #+#              #
#    Updated: 2018/06/14 07:54:27 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = array

SRC = main.cpp

OBJ = main.o

all: $(NAME)

$(NAME):
	@$(CC) -c $(SRC) $(FLAGS)
	@echo "create object file"
	@$(CC) -o $(NAME) $(OBJ) $(FLAGS)
	@echo "compile exe array"

clean:
	@/bin/rm $(OBJ)
	@echo "clean object file"

fclean: clean
	@/bin/rm $(NAME)
	@echo "clean exe"

re: fclean all

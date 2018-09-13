# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 08:05:26 by tmwalo            #+#    #+#              #
#    Updated: 2018/06/13 13:45:00 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = whatever

SRC = whatever.cpp

OBJ = whatever.o

all: $(NAME)

$(NAME):
	@$(CC) -c $(SRC) $(FLAGS)
	@echo "create object file"
	@$(CC) -o $(NAME) $(OBJ) $(FLAGS)
	@echo "create exe"

clean:
	@/bin/rm $(OBJ)
	@echo "clean object file"

fclean: clean
	@/bin/rm $(NAME)
	@echo "clean exe"

re: fclean all

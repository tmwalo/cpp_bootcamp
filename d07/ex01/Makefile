# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 16:22:02 by tmwalo            #+#    #+#              #
#    Updated: 2018/06/13 16:27:39 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = iter

SRC = iter.cpp

OBJ = iter.o

all: $(NAME)

$(NAME):
	@$(CC) -c $(SRC) $(FLAGS)
	@echo "create object"
	@$(CC) -o $(NAME) $(OBJ) $(FLAGS)
	@echo "create exe"

clean:
	/bin/rm $(OBJ)

fclean: clean
	/bin/rm $(NAME)

re: fclean all

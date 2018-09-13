# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 12:55:35 by tmwalo            #+#    #+#              #
#    Updated: 2018/06/05 13:20:41 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

SRC = megaphone.cpp

OBJ = megaphone.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): obj
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

obj:
	$(CC) -c $(SRC) $(FLAGS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 12:55:35 by tmwalo            #+#    #+#              #
#    Updated: 2018/06/05 17:50:23 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++

SRC = phonebook.cpp Contact.cpp

OBJ = phonebook.o Contact.o

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

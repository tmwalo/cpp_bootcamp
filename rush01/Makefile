NAME = ft_gkrellm

SRC = *.cpp 

OBJ = ft_gkrellm.o

CC = clang++ -lncurses

CFLAGS = -Wall -Werror -Wextra

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	ar rc $(OBJ) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

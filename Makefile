##
## EPITECH PROJECT, 2022
## antman
## File description:
## Makefile
##

CC = gcc

CFLAGS = -I.\include

SRC = 	src\main.c 				\
		src\antman.c 			\
		src\read_file.c 		\
		src\get_size.c			\
		src\enum_letters.c 		\
		src\clean_string.c 		\

LIB =	library\my_putchar.c 	\
		library\my_strlen.c 	\
		library\my_put_nbr.c 	\
		library\my_strcmp.c 	\
		library\my_strcpy.c 	\

OBJ = $(SRC:.c=.o) $(LIB:.c=.o)

NAME = antman.exe

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ)

clean:
	@del /f /q $(OBJ)

fclean: clean
	@del /f /q $(NAME)

re: fclean all

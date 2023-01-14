##
## EPITECH PROJECT, 2022
## B-CPE-110-TLS-1-1-antman-mathieu.boschet
## File description:
## Makefile
##

CC = gcc

CFLAGS = -I.\include

SRC = 	src\main.c 				\
		src\antman.c 			\
		src\read_file.c 		\

LIB = library\my_putc.c 		\

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

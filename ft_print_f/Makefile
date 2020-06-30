SHELL = /bin/sh

NAME = printf
SRC = *c
SRC_O = *o
HEAD = ft_printf.h
LIB = -L /Users/tjeerd/libft/ -lft
CC = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@$(CC) -g $(SRC) $(HEAD) $(LIB) 

clean:
	@/bin/rm -f $(SRC_O)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(WILDCARD *.swp)
	@/bin/rm -f $(WILDCARD *.gch)

re: fclean all

.PHONY: clean


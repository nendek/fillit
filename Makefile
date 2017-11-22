# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/22 11:51:45 by pnardozi          #+#    #+#              #
#    Updated: 2017/11/22 16:13:12 by arobion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = fillit

SRC = main.c \
	  solver.c \
	  map.c \
	  list.c \
	  read.c

OBJ = $(SRC:.c=.o)

LIB = libft/libft.a

INCLUDES = libft/

RED = \033[31m
GREEN = \033[32m
END = \033[0m

all : $(NAME)

$(NAME): $(OBJ)
	cd libft/ && make
	cd ..
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIB)
	@echo "$(GREEN)FILLIT READY$(END)"
	
%.o: %.c
	$(CC) -c $(CFLAGS) -I $(INCLUDES) -o $@ -c $<

clean:
	cd libft/ && make clean
	cd ..
	/bin/rm -f $(OBJ)
	@echo "$(RED)FILLIT OBJECTS REMOVE$(END)"

fclean: clean
	cd libft/ && make fclean
	cd ..
	/bin/rm -f $(NAME)
	@echo "$(RED)FILLIT REMOVE$(END)"

re: fclean all

.PHONY: all

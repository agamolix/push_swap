# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrilles <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 17:07:37 by atrilles          #+#    #+#              #
#    Updated: 2022/02/16 18:17:53 by atrilles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----  PROJECT  ------------------------------------------------------------- #
NAME = push_swap

# ----  DIRECTORIES  --------------------------------------------------------- #
SRC_DIR	= src/

# ----  SOURCE FILES  -------------------------------------------------------- #
SRC_FILES =		atoi		cases		errors		functions_tab	init      \
				moves		moves_col	push_swap	radix			utils

SRC = $(addprefix src/, $(addsuffix .c, $(SRC_FILES)))
OBJ = $(addprefix src/, $(addsuffix .o, $(SRC_FILES)))

# ----  FLAGS  --------------------------------------------------------------- #
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = 

# ----  RULES  --------------------------------------------------------------- #
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean fclean re

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all


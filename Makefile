# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 11:48:27 by badriano          #+#    #+#              #
#    Updated: 2024/08/12 04:12:46 by belmiro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra
CC = gcc
LIBFT_DIR = ./libft
UTILS_DIR = ./utils
SORT_DIR = ./sorting
RULES_DIR = ./operations
ERRORS_DIR = ./errors
MAIN = main.c
COMMON_SRC = $(wildcard $(UTILS_DIR)/*.c $(RULES_DIR)/*.c $(SORT_DIR)/*.c $(ERRORS_DIR)/*.c) # Expands to all .c files in directories
OBJ = $(COMMON_SRC:.c=.o) $(MAIN:.c=.o) # Creates object files for all source files

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Program is ready!!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "Object files have been cleaned successfully"

fclean: clean
	@rm -f $(NAME)
	@echo "Objects and executables removed"

re: fclean all

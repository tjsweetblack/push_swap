# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 11:48:27 by badriano          #+#    #+#              #
#    Updated: 2024/08/05 09:13:31 by belmiro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra
CC = gcc
LIBFT_DIR = ./libft
UTILS_DIR = ./utils
SORT_DIR = ./sorting
RULES_DIR = ./operations
MAIN = main.c
COMMON_SRC = $(UTILS_DIR)/*.c $(RULES_DIR)/*.c $(SORT_DIR)/*.c# Add common source files here
#COMMON_OBJ = $(COMMON_SRC:.c=.o)

all: $(NAME)

$(NAME):
#	@make $(LIBFT_DIR)/
	$(CC) $(CFLAGS) $(MAIN) $(COMMON_SRC) -o $(NAME)
	@echo "program is ready!!"

#%.o: %.c
#	$(CC) $(CFLAGS) -c $< -o $@

clean:
#	rm $(LIBFT_DIR)/*.o
	@echo "Object files have been cleaned successfully"

fclean: clean
	@rm -f $(NAME)
	@echo "Objects and executables removed"

re: fclean all

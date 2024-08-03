# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 11:48:27 by badriano          #+#    #+#              #
#    Updated: 2024/08/03 08:31:52 by belmiro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra
CC = gcc
LIBFT_DIR = ./libft
SRC_DIR = ./utils
MAIN = main.c
COMMON_SRC = $(SRC_DIR)/*.c# Add common source files here
#COMMON_OBJ = $(COMMON_SRC:.c=.o)

all: $(NAME)

$(NAME):
	@make $(LIBFT_DIR)/
	$(CC) $(CFLAGS) -I $(LIBFT_DIR) $(MAIN) $(COMMON_SRC) -L $(LIBFT_DIR) -lft -o $(NAME)
	@echo "program is ready!!"

#%.o: %.c
#	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(LIBFT_DIR)/*.o
	@echo "Object files have been cleaned successfully"

fclean: clean
	@rm -f $(NAME)
	@echo "Objects and executables removed"

re: fclean all

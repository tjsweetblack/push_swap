# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 11:48:27 by badriano          #+#    #+#              #
#    Updated: 2024/08/12 05:45:26 by belmiro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra
CC = cc
UTILS_DIR = ./utils
SORT_DIR = ./sorting
RULES_DIR = ./operations
ERRORS_DIR = ./errors
PRINTF_DIR = ./ft_printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a 
MAIN = main.c
COMMON_SRC = $(wildcard $(UTILS_DIR)/*.c $(RULES_DIR)/*.c $(SORT_DIR)/*.c $(ERRORS_DIR)/*.c) # Expands to all .c files in directories
OBJ = $(COMMON_SRC:.c=.o) $(MAIN:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(PRINTF_LIB)
	$(CC) $(CFLAGS) $(OBJ) -L$(PRINTF_DIR) -lftprintf -o $(NAME)
	@echo "Program is ready!!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(PRINTF_LIB):
	$(MAKE) -C $(PRINTF_DIR)

clean:
	@rm -f $(OBJ)
	@rm -f $(PRINTF_DIR)/*.o
	@echo "Object files have been cleaned successfully"

fclean: clean
	@rm -f $(NAME)
	@rm -f $(PRINTF_LIB)
	@echo "Objects and executables removed"

re: fclean all

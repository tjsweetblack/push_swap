# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 20:49:22 by badriano          #+#    #+#              #
#    Updated: 2024/08/12 05:45:31 by belmiro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

APP = app

src = *.c

OBJ = *.o

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(src) -I ./
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

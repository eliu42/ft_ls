# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/22 21:12:21 by eliu              #+#    #+#              #
#    Updated: 2017/01/24 22:07:00 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

LIBFT_PATH = ./libft/
SRC_PATH = ./sources/
OBJ_PATH = ./objects/

LIBFT_A = $(LIBFT_PATH)libft.a

FILES = main
SRC_FILES = $(addsuffix .c, $(FILES))
OBJ_FILES = $(addsuffix .o, $(FILES))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C ./libft
	gcc $(CFLAGS) -c $(SRC_FILES)
	gcc -o $(NAME) $(CFLAGS) $(OBJ_FILES) $(LIBFT_A)

obj:
	rm -f $(NAME)
	gcc $(CFLAGS) -o $(NAME) $(OBJ_FILES) $(LIBFT_A)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all obj clean fclean re

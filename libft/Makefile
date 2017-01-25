# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 18:27:38 by eliu              #+#    #+#              #
#    Updated: 2017/01/24 22:13:36 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTIONS = isalpha isascii isdigit islower isprint isspace isupper \
			atoi itoa lstadd lstdel lstdelone lstiter lstmap lstnew \
			bzero memalloc memccpy memchr memcmp memcpy memdel memmove memset \
			memcpy_bwd putchar putchar_fd putendl putendl_fd putnbr putnbr_fd \
			putstr putstr_fd strcat strchr strcjoin strclen strclr strcmp \
			strcpy strdel strdup strequ striter striteri strjoin_memdel \
			strjoin strlcat strlen strmap strmapi strncat strncmp strncpy \
			strndup strnequ strnew strnlen strnstr strrchr strsplit strstr \
			strsub strtrim tolower toupper \

SRC_PATH = ./sources/
OBJ_PATH = ./objects/

FILES = $(addprefix ft_, $(FUNCTIONS))
SRC_FILES = $(addsuffix .c, $(FILES))
OBJ_FILES = $(addsuffix .o, $(FILES))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	gcc $(CFLAGS) -c $(addprefix $(SRC_PATH), $(SRC_FILES))
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)
	mkdir $(OBJ_PATH)
	mv $(OBJ_FILES) $(OBJ_PATH)

obj:
	ar rc $(NAME) $(addprefix $(OBJ_PATH), OBJ_FILES)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ_PATH) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all obj clean fclean re

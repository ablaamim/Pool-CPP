# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 15:57:26 by ablaamim          #+#    #+#              #
#    Updated: 2023/01/09 15:57:28 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRC = Fixed.cpp \
      main.cpp \

CC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
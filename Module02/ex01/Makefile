# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 17:25:45 by ablaamim          #+#    #+#              #
#    Updated: 2023/01/10 17:25:48 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRCS = main.cpp \
		 Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

CC = g++ 

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

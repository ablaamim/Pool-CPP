# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 18:37:39 by ablaamim          #+#    #+#              #
#    Updated: 2023/01/16 18:37:41 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re

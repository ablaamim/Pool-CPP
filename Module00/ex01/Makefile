# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 17:38:04 by ablaamim          #+#    #+#              #
#    Updated: 2022/12/04 17:38:08 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = awesomephonebook

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./sources/main.cpp \
	  ./sources/Contact.cpp \
	  ./sources/PhoneBook.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CC) $(CFLAGS) -o $(Name) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 07:29:32 by ablaamim          #+#    #+#              #
#    Updated: 2022/12/12 09:03:41 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AwesomePhoneBook

SRCS = main.cpp \
		PhoneBook.cpp \
		Contact.cpp

OBJS = $(SRCS:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all re fclean clean

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 15:56:02 by ablaamim          #+#    #+#              #
#    Updated: 2022/12/04 16:04:40 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone                           # Name of the executable file to be created by the Makefile.

SRC = megaphone.cpp                        # Name of the source file.

OBJ = $(SRC:.cpp=.o)                       # Name of the object file (same as source file but with .o extension) to be created by the Makefile.

CC = clang++                               # Compiler to be used.

CFLAGS = -Wall -Wextra -Werror -std=c++98  # Flags to be used by the compiler.

all: $(NAME)                               # Rule to be executed when typing "make" in the terminal.

$(NAME): $(OBJ)                            # Rule to be executed when typing "make $(NAME)" in the terminal.
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp                                 # Rule to be executed when typing "make %.o" in the terminal.
	$(CC) $(CFLAGS) -c $< -o $@

clean:                                     # Rule to be executed when typing "make clean" in the terminal.
	rm -f $(OBJ)

fclean: clean                              # Rule to be executed when typing "make fclean" in the terminal.
	rm -f $(NAME)

re: fclean all                             # Rule to be executed when typing "make re" in the terminal.

.PHONY: all clean fclean re                # Prevents the Makefile from being executed if a file with the same name as the rule exists.

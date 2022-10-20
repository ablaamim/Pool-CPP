# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 20:46:52 by ablaamim          #+#    #+#              #
#    Updated: 2022/10/20 20:46:53 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook # Name of the executable

SRC = Contact.cpp PhoneBook.cpp # List of source files

OBJ = $(SRC:.cpp=.o) # List of object files

all: $(NAME) # Rule to build the executable from the object files

$(NAME): $(OBJ) # Rule to build the object files from the source files
	clang++ -Wall -Wextra -Werror -o $(NAME) $(OBJ) 

%.o: %.cpp
	clang++ -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

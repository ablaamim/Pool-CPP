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

SRC = main.cpp \
	  Contact.cpp \
	  PhoneBook.cpp \


OBJ = $(SRC:.cpp=.o) # List of object files

all: $(NAME) # Rule to build the executable from the object files

$(NAME): $(OBJ) # Rule to build the object files from the source files
	clang++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(OBJ) 

%.o: %.cpp # Rule to build the object files from the source files
	clang++ -Wall -Wextra -Werror -c $< -o $@

clean: # Rule to delete the object files
	rm -f $(OBJ)

fclean: clean # Rule to delete the object files and the executable file
	rm -f $(NAME)

re: fclean all # Rule to delete the object files and the executable file and rebuild the executable file

.PHONY: all clean fclean re # List of phony targets

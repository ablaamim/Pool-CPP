NAME = Intern

SRC = main.cpp \
		Bureaucrat.cpp \
		 Form.cpp \
		 ShrubberyCreationForm.cpp \
		 RobotomyRequestForm.cpp \
		 PresidentialPardonForm.cpp \
		 Intern.cpp

CC = clang++

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
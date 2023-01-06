NAME = prog

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

CFLAGS = -Wall -Wextra -Werror

C = clang++

$(NAME): $(OBJ)
	$(C) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
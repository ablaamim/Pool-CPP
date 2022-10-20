NAME = megaphone  # Name of the executable

SRCS = ./megaphone.cpp # List of source files

OBJS = $(SRCS:.cpp=.o) # List of object files

CC = clang++ # Compiler

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address # Flags for the compiler

RM = rm -f # Command to remove files

all: $(NAME) # Rule to build the executable from the object files

$(NAME): $(OBJS) # Rule to build the object files from the source files
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp # Rule to build the object files from the source files
	$(CC) $(CFLAGS) -c $< -o $@

clean: # clean rule to remove object files
	$(RM) $(OBJS)

fclean: clean # fclean rule (clean + remove executable)
	$(RM) $(NAME)

re: fclean all # re rule (clean and build)

.PHONY: all clean fclean re # Phony rules to avoid conflicts with files named clean, fclean, re, all
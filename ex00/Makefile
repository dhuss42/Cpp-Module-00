CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILES = megaphone.cpp
OFILES = $(CPPFILES:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OFILES)
	@$(CC) $(CPPFLAGS) $(OFILES) -o $(NAME)

clean: 
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

.PHONY: all clean fclean re
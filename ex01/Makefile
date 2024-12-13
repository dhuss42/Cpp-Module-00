CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILES = main.cpp\
	add.cpp\
	search.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = phonebook

all: $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CPPFLAGS) $(OFILES) -o $(NAME)

clean:
	@rm -f $(OFILES)

fclean:
	@rm -f $(OFILES)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

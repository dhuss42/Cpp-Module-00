# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 14:11:37 by dhuss             #+#    #+#              #
#    Updated: 2024/12/18 13:15:29 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILES = main.cpp\
	PhoneBook.cpp\
	Contact.cpp
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

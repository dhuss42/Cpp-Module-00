# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 14:44:47 by dhuss             #+#    #+#              #
#    Updated: 2024/12/16 16:01:09 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILES = Account.cpp\
	tests.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = Account

$(NAME): $(OFILES)
	@$(CC) $(CPPFLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
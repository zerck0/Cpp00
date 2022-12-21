# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 02:28:45 by tgeorgin          #+#    #+#              #
#    Updated: 2022/12/21 18:15:05 by tgeorgin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Contact.cpp Phonebook.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= CrappyPhoneBook

CLANG	= clang++

FLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= none

HEADER	= none




all:	$(NAME)

.PHONY:	clean fclean re bonus bench bclean

$(NAME): $(OBJS)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	$(CLANG) $(FLAGS) -c $<  -o $(<:.cpp=.o)

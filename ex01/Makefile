# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 07:28:23 by pszleper          #+#    #+#              #
#    Updated: 2023/06/01 07:39:45 by pszleper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILATION = c++ -Wall -Wextra -Werror -std=c++98

NAME = a.out

SRC = Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(COMPILATION) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(COMPILATION) $< -c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

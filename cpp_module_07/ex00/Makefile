# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 15:43:23 by akharraz          #+#    #+#              #
#    Updated: 2023/01/22 15:45:04 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = main.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJ} whatever.hpp
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

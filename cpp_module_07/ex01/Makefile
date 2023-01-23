# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 16:17:19 by akharraz          #+#    #+#              #
#    Updated: 2023/01/23 12:04:47 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = main.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJ}  iter.hpp
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

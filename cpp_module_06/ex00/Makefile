	# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 19:32:35 by akharraz          #+#    #+#              #
#    Updated: 2023/01/19 19:33:24 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC = main.cpp getType.cpp convertToTypes.cpp callTypes.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJ}
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp cast.hpp
	c++  -std=c++98 -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 23:38:28 by akharraz          #+#    #+#              #
#    Updated: 2023/01/25 00:08:28 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

SRC =  main.cpp span.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJ} span.hpp
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

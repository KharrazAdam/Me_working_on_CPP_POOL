# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 13:11:13 by akharraz          #+#    #+#              #
#    Updated: 2023/01/22 00:07:21 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Base

SRC = Base.cpp main.cpp generate.cpp identify.cpp

OBJ = ${SRC:%.cpp=%.o}

INCLUDES = Base.hpp A.hpp B.hpp C.hpp

all: ${NAME}

${NAME}: ${OBJ} ${INCLUDES}
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp
	c++  -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

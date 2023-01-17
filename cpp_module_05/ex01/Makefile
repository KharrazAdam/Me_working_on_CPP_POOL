# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 05:44:20 by akharraz          #+#    #+#              #
#    Updated: 2023/01/17 05:47:23 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = ${SRC:%.cpp=%.o}

INCLUDES = Bureaucrat.hpp Form.hpp

all: ${NAME}

${NAME}: ${OBJ} ${INCLUDES}
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

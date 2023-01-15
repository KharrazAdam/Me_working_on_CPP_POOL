# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 16:29:49 by akharraz          #+#    #+#              #
#    Updated: 2023/01/15 23:31:43 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract_class

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = ${SRC:%.cpp=%.o}

INCLUDES = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

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

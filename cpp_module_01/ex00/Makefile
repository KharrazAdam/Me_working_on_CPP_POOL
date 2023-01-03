# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 11:05:15 by akharraz          #+#    #+#              #
#    Updated: 2023/01/04 00:45:04 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = ${SRC:%.cpp=%.o}

HEADER = Zombie.hpp

all: ${NAME}

${NAME}: ${OBJ} 
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp ${HEADER}
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 11:05:15 by akharraz          #+#    #+#              #
#    Updated: 2022/12/29 08:41:21 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = main.o Zombie.o newZombie.o randomChump.o

all: ${NAME}

${NAME} : ${OBJ}
	c++   ${OBJ}   -o ${NAME}
# %.o : %.cpp
# 	c++ -Wall -Wextra -Werror -std=c++98 $< -o $@ 

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
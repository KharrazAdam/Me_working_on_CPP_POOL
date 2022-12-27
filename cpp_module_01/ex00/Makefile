# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 11:05:15 by akharraz          #+#    #+#              #
#    Updated: 2022/12/27 11:49:42 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = main.o Zombie.o newZombie.o randomChump.o

all: ${NAME}

${NAME} : ${OBJ}

%.o : %.c
	c++ -Wall -Wextra -Werror $< -o $@ 

clean :
	rm -f ${SRC}

fclean : clean
	rm -f ${NAME}

re : fclean all
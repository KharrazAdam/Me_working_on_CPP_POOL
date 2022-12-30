# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 11:33:14 by akharraz          #+#    #+#              #
#    Updated: 2022/12/30 13:08:44 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

# SRC = Zombie.cpp zombieHorde.cpp main.cpp

OBJS = Zombie.o zombieHorde.o main.o

FLAGS = 

CC = c++


all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

${OBJS} : %.o: %.cpp
	${CC} -c $(FLAGS) $< -o $@ -c

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

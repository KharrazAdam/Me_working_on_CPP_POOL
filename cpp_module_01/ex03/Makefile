# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 19:11:57 by akharraz          #+#    #+#              #
#    Updated: 2022/12/31 22:45:38 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = main.o Weapon.o HumanA.o HumanB.o

FLAGS = -Wall -Wextra -Werror -std=c++98

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

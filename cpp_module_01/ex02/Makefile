# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 21:46:58 by akharraz          #+#    #+#              #
#    Updated: 2022/12/16 21:46:59 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = main

# SRC = Zombie.cpp zombieHorde.cpp main.cpp

OBJS = main.o

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
